#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

#include "ICharacter.hpp"
class ICharacter;


class AMateria {
    protected:
        unsigned int xp;
        std::string type;
        AMateria( void );
    public:
        AMateria(std::string const & type);
        AMateria( AMateria const & src );
        AMateria & operator=( AMateria const & rhs );
        virtual ~AMateria();

        std::string const & getType() const;
        unsigned int        getXP() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#endif