#include "Bureaucrat.hpp"

int     main() {

    // To low Exceptions constructor && decrement
    try
    {
        Bureaucrat b("Ymik", 160);
    }
    catch(std::exception const& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b("Ymik", 150);
        b.decrement();
    }
    catch(std::exception const& e)
    {
        std::cerr << e.what() << '\n';
    }

    // To High Exception constructor && increment

     try
    {
        Bureaucrat b("Ymik", -1);
    }
    catch(std::exception const& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat b("Ymik", 1);
        b.increment();
    }
    catch(std::exception const& e)
    {
        std::cerr << e.what() << '\n';
    }

    // All fine code
    try
    {
        Bureaucrat b("ymik", 140);
        std::cout << b;
        b.increment();
        b.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}