#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <iostream>

class Victim {
     protected:
        std::string name;
        std::string title;
        // Canonical default constructor
        Victim(void);
    public:
        Victim(std::string const & name);
        // Canonical form
        Victim(Victim const & src);
        ~Victim(void);
        Victim & operator=(Victim const & rhs);

        // Getters
        std::string getName( void ) const;

        // Setters
        void        setName(std::string const & name);

        // Polymorphed
        virtual void        getPolymorphed( void ) const;
};

std::ostream & operator<<(std::ostream & o, Victim & rhs);
#endif