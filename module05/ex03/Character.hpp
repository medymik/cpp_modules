#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
typedef struct  s_node
{
    AMateria*       item;
    bool            used;
}               t_node;

class Character : public ICharacter {
    private:
        std::string name;
        t_node      *list;

    public:
        Character( void );
        ~Character( void );
        Character( Character const & src );
        Character & operator=( Character const & rhs );
        Character( std::string const & name );
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        std::string const & getName() const;
};
#endif