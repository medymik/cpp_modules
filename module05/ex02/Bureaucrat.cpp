#include "Bureaucrat.hpp"

std::string const&  Bureaucrat::getName() const {
    return this->name;
}

int                 Bureaucrat::getGrade() const {
    return this->grade;
}

void                Bureaucrat::decrement() {
    if (this->grade + 1 > 150) {
        throw GradeTooLowException();
    } else {
        this->grade += 1;
    }
}

void                Bureaucrat::increment() {
    if (this->grade - 1 < 1) {
        throw GradeTooHighException();
    } else {
        this->grade -= 1;
    }
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs) {
    o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">" << std::endl;
    return o;
}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : name(name) , grade(grade) {
    if (this->grade < 1) {
        throw GradeTooHighException();
    } else if (this->grade > 150) {
        throw GradeTooLowException();
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade Too Low";
}

void        Bureaucrat::SignForm(Form & form) {
    try
    {
        form.beSigned(*this);
        std::cout << "<" << this->name << ">" << " signs <" << form.getName() << ">" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "<" << this->name << ">" << " cannot sign <" << form.getName() << "> because <" << e.what() << ">" << std::endl;
    }
}

Bureaucrat::Bureaucrat() {
}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat( Bureaucrat const& src ) {
    *this = src;
}

Bureaucrat& Bureaucrat::operator=( Bureaucrat const& rhs ) {
    if (this != &rhs) {
        this->grade = rhs.getGrade();
    }
    return *this;
}