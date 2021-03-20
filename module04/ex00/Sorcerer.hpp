#ifndef SORCERER_HPP
# define SORCERER_HPP
#include <iostream>
#include <ostream>
#include "Victim.hpp"

class Sorcerer {
    private:
        std::string _name;
        std::string _title;
        Sorcerer( void );
    
    public:
        // Getters
        std::string getName( void ) const;
        std::string getTitle( void ) const;

        // Setters
        void        setName(std::string const & name);
        void        setTitle(std::string const & title);

        // Constructors
        Sorcerer( std::string name, std::string title );
        Sorcerer( Sorcerer const & src );

        // Deconstructor
        ~Sorcerer( void );

        // methods
        void polymorph(Victim const &) const;

        // Operators
        Sorcerer & operator=(Sorcerer const & rhs);
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs); 
#endif