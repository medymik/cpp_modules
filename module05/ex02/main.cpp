#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int     main() {

    // Grade Too Low To Exec the form Exception

    {
        PresidentialPardonForm frm("home");
        Bureaucrat b("khaled", 23);
        b.SignForm(frm);
        b.executeForm(frm);
        frm.action();
        std::cout << "==================" << std::endl;
    }

    // Not Signed Form
    {
        RobotomyRequestForm frm("home");
        Bureaucrat b("khaled", 5);
        b.executeForm(frm);
        frm.action();
        std::cout << "==================" << std::endl;
    }

    // Good form
    {
        ShrubberyCreationForm frm("home");
        Bureaucrat b("mohammed", 1);
        b.SignForm(frm);
        b.executeForm(frm);
        frm.action();
        std::cout << "==================" << std::endl;
    }

    // // Grade Too Low Exception
    // try
    // {
    //     Form frm("formulaire1", 151, 1);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // // Bureaucrat cannot sign it Exception
    // try
    // {
    //     Form frm("formulaire1", 2, 1);
    //     Bureaucrat b("ymik", 3);
    //     b.SignForm(frm);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // // Bureaucrat can sign it
    // try
    // {
    //     Form frm("formulaire2", 40, 1);
    //     std::cout << "State of frm2: " << frm.getSigned() << std::endl;
    //     Bureaucrat b("khaled", 40);
    //     b.SignForm(frm);
    //     std::cout << "State of frm2: " << frm.getSigned() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
}