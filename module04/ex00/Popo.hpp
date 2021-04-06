#ifndef POPO_H
# define POPO_H
# include "Victim.hpp"

class Popo : public Victim {
    private:
        Popo(void);
    public:
        Popo(std::string const & name);
        // Canonical form
        Popo(Popo const & src);
        virtual ~Popo(void);
        Popo & operator=(Popo const & rhs);

        // Polymorphed
        virtual void  getPolymorphed( void ) const;
};
#endif