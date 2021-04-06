#include "Form.hpp"
#include "Bureaucrat.hpp"

int     main() {

    // Grade Too High Exception
    try
    {
        Form frm("formulaire1", -1, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Grade Too Low Exception
    try
    {
        Form frm("formulaire1", 151, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Bureaucrat cannot sign it Exception
    try
    {
        Form frm("formulaire1", 2, 1);
        Bureaucrat b("ymik", 3);
        b.SignForm(frm);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Bureaucrat can sign it
    try
    {
        Form frm("formulaire2", 40, 1);
        std::cout << frm;
        Bureaucrat b("khaled", 40);
        b.SignForm(frm);
        std::cout << frm;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}