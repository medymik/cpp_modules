#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine {
    public:
        AssaultTerminator( void );
        virtual ~AssaultTerminator( void );
        AssaultTerminator( AssaultTerminator const & src );
        AssaultTerminator & operator=( AssaultTerminator const & rhs );

        // impl
        ISpaceMarine*   clone() const;
        void            battleCry() const;
        void            rangedAttack() const;
        void            meleeAttack() const;
};
#endif