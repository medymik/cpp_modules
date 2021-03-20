#ifndef VICTIM_HPP
# define VICTIM_HPP
#include <iostream>
class Victim {
    private:
        std::string _name;
    public:
        Victim( std::string name );
        virtual ~Victim( void );

        // Getters
        std::string getName( void ) const;

        virtual void getPolymorphed( void ) const;
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs); 
#endif