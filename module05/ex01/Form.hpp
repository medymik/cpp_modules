#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
    private:
        std::string const name;
        // by default false
        bool _signed;
        int const requiredGradeToSign;
        int const requiredGradeToExecute;
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

        // Constructors
        Form(std::string const& name, int gradeSign, int gradeExec);
        Form(Form const& src);
        Form & operator=(Form const& rhs);
        ~Form();

        // getters
        std::string const& getName() const;
        bool    getSigned() const;
        int     getRequiredGradeToSign() const;
        int     getRequiredGradeToExecute() const;
        // Check if the grade to sign is valid else throw an exception type @Form::GradeTooLowException.
        void    beSigned(Bureaucrat const& b);
};

std::ostream & operator<<( std::ostream& o, Form const& form);
#endif