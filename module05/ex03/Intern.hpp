#ifndef INTERN_HPP
# define INTERN_HPP
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    private:
    public:
        Intern();
        ~Intern();
        Intern( Intern const& src );
        Intern & operator=( Intern const& rhs );
        Form*   makeForm(std::string const& name, std::string const& target);
        Form*   presidentialpardon(std::string const &target);
        Form*   robotomyrequest(std::string const &target);
        Form*   shrubberycreation(std::string const &target);
};
#endif