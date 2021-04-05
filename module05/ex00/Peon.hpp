#ifndef PEON_H
# define PEON_H
# include "Victim.hpp"

class Peon : public Victim {
    private:
        Peon(void);
    public:
        Peon(std::string const & name);
        // Canonical form
        Peon(Peon const & src);
        virtual ~Peon(void);
        Peon & operator=(Peon const & rhs);

        // Polymorphed
        virtual void  getPolymorphed( void ) const;
};
#endif