#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int     main() {

    // // Grade Too Low To Sign Exception
    try
    {
        PresidentialPardonForm frm("home");
        Bureaucrat b("khaled", 150);
        b.SignForm(frm);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
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