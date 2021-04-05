#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISquad.hpp"
#include <iostream>
typedef struct  s_list
{
    ISpaceMarine* item;
    struct s_list* next;
}               t_list;

class Squad : public ISquad {
    private:
        int count;
        t_list  *lst;

    public:
        Squad( void );
        Squad( Squad const & src );
        Squad & operator=( Squad const & rhs );
        virtual ~Squad();
        int getCount() const;
        ISpaceMarine* getUnit(int) const;
        int push(ISpaceMarine*);
};
#endif