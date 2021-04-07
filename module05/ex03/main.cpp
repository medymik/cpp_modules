#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int     main() {
    Bureaucrat b("amine", 1);
    Intern intern;
    Form* frm1 = intern.makeForm("robotomy request", "bender"); 
    Form* frm2 = intern.makeForm("shrubbery creation", "gogo"); 
    Form* frm3 = intern.makeForm("presidential pardon", "toto");
    intern.makeForm("test request", "bender");
    b.SignForm(*frm1);
    b.SignForm(*frm2);
    b.SignForm(*frm3);
    b.executeForm(*frm1);
    b.executeForm(*frm2);
    b.executeForm(*frm3);
}