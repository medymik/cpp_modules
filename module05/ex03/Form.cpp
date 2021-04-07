#include "Form.hpp"

Form::Form(): requiredGradeToSign(1), requiredGradeToExecute(1) {
}

Form::Form(std::string const& name, int gradeSign, int gradeExec): name(name), requiredGradeToSign(gradeSign), requiredGradeToExecute(gradeExec) {
    if (this->requiredGradeToSign > 150 || this->requiredGradeToExecute > 150) {
        throw GradeTooLowException();
    } else if (this->requiredGradeToSign < 0 || this->requiredGradeToExecute < 0) {
        throw GradeTooHighException();
    }
    this->_signed = false;
}

std::string const& Form::getName() const {
    return this->name;
}

bool    Form::getSigned() const {
    return this->_signed;
}

int     Form::getRequiredGradeToSign() const {
    return this->requiredGradeToSign;
}

int     Form::getRequiredGradeToExecute() const {
    return this->requiredGradeToExecute;
}

void    Form::beSigned(Bureaucrat const& b) {
    if (b.getGrade() > this->requiredGradeToSign)
    {
        throw GradeTooLowException();
        return;
    }
    this->_signed = true;
}

std::ostream & operator<<( std::ostream& o, Form const& form ) {
    std::string state = (form.getSigned()) ? "already signed" : "need to be signed";
    o << form.getName() << " " << state << std::endl;
    return o;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}

const char* Form::UnsignedFormException::what() const throw() {
	return "Unsigned Form";
}

Form::Form(Form const& src):
    requiredGradeToSign(src.requiredGradeToSign),
    requiredGradeToExecute(src.requiredGradeToExecute) {
    *this = src;
}

Form & Form::operator=(Form const& rhs) {
    if (this != &rhs) {
        this->_signed = rhs._signed;
        this->target = rhs.target;
    }
    return *this;
}

Form::~Form() {
}

Form::Form(std::string const& name, int gradeSign, int gradeExec, std::string const& target):
    name(name),
    requiredGradeToSign(gradeSign),
    requiredGradeToExecute(gradeExec),
    target(target) {
    
}

std::string const& Form::getTarget() const {
    return this->target;
}

void    Form::execute(Bureaucrat const& executor) const {
    if (!this->_signed)
        throw UnsignedFormException();
    if (this->getRequiredGradeToExecute() < executor.getGrade())
        throw GradeTooLowException();
}