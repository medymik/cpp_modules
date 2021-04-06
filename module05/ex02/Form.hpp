#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
    private:
        std::string name;
        // by default false
        bool _signed;
        int const requiredGradeToSign;
        int const requiredGradeToExecute;
        std::string target;
    protected:
        Form();

    public:
        class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
                virtual const char* what() const throw();
		};
        class UnsignedFormException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

        // Constructors
        Form(std::string const& name, int gradeSign, int gradeExec);
        Form(Form const& src);
        Form & operator=(Form const& rhs);
        Form(std::string const& name, int gradeSign, int gradeExec, std::string const& target);
        virtual ~Form();

        // getters
        std::string const& getName() const;
        bool    getSigned() const;
        int     getRequiredGradeToSign() const;
        int     getRequiredGradeToExecute() const;
        // Check if the grade to sign is valid else throw an exception type @Form::GradeTooLowException.
        void    beSigned(Bureaucrat const& b);
        std::string const& getTarget() const;
        virtual void action() const = 0;
};

std::ostream & operator<<( std::ostream& o, Form const& form);
#endif