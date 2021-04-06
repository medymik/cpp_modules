#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine {
    public:
        TacticalMarine( void );
        virtual ~TacticalMarine( void );
        TacticalMarine( TacticalMarine const & src );
        TacticalMarine & operator=( TacticalMarine const & rhs );

        // impl
        ISpaceMarine*   clone() const;
        void            battleCry() const;
        void            rangedAttack() const;
        void            meleeAttack() const;
};
#endif