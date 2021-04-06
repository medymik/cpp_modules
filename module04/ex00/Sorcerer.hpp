#ifndef SORCERER_HPP
# define SORCERER_HPP
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
    private:
        std::string name;
        std::string title;
        // Canonical default constructor
        Sorcerer(void);
    public:
        Sorcerer(std::string const & name, std::string const & title);
        // Canonical form
        Sorcerer(Sorcerer const & src);
        ~Sorcerer(void);
        Sorcerer & operator=(Sorcerer const & rhs);

        // Getters
        std::string getName( void ) const;
        std::string getTitle( void ) const;

        // Setters
        void        setName(std::string const & name);
        void        setTitle(std::string const & title);

        // Polymorph
        void        polymorph(Victim const & victim) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer & rhs);
#endif