#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

#include "Form.hpp"
class Form;

class Bureaucrat {
    private:
        std::string const name;
        int grade;
    public:
        class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat( Bureaucrat const& src );
        Bureaucrat & operator=( Bureaucrat const& rhs );
        Bureaucrat(std::string const& name, int grade);
        std::string const&  getName() const;
        int                 getGrade() const;

        void                increment();
        void                decrement();
        void                SignForm(Form & form);
        void                executeForm(Form const& form);
};

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs);
#endif