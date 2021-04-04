#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"
class SuperMutant: public Enemy {
    private:

    public:
        SuperMutant( void );
        virtual ~SuperMutant( void );
        SuperMutant( SuperMutant const & src );
        SuperMutant & operator=( SuperMutant const & rhs );
        virtual void takeDamage(int amount);
};
#endif