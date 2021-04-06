#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>
class Enemy
{
    protected:
        int hp;
        std::string type;
        Enemy( void );

    public:
        Enemy(int hp, std::string const & type);
        Enemy( Enemy const & src );
        Enemy & operator=(Enemy const & rhs);
        virtual ~Enemy();
        std::string const & getType() const;
        int getHP() const;
        virtual void takeDamage(int);
};
#endif