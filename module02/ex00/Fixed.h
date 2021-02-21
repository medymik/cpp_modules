#ifndef FIXED_H
# define FIXED_H
# include <iostream>

class Fixed {
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed( Fixed const & src );
        Fixed & operator=(Fixed const & rhs);
        int     getRawBits( void ) const;
        void     setRawBites(int const raw);
    private:
        int _value;
        static int const _bits;
};
#endif