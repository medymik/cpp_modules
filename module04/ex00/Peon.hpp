#ifndef PEON_HPP
# define PEON_HPP
# include "Victim.hpp"
# include <iostream>
class Peon : public Victim {
    private:
        // Default constructor
        Peon( void );
    public:
        // Init constructor
        Peon( std::string name );
        // Copy Constructor
        Peon( Peon const & src );
        // Deconstructor
        virtual ~Peon( void );

        virtual void getPolymorphed( void ) const;
};

std::ostream & operator<<(std::ostream & o, Peon const & rhs);
#endif