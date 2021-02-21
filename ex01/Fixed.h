#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed {
    public:
        // Constructors
        Fixed( void );
        ~Fixed( void );
        Fixed( Fixed const & src );
        Fixed( int const value );
        Fixed( float const value );
        // Assignment operator
        Fixed & operator=(Fixed const & rhs);
        // Getters and setters
        int     getRawBits( void ) const;
        void     setRawBites(int const raw);
        // Conversion
        float   toFloat( void ) const;
        int    toInt( void ) const;
    private:
        int _value;
        static int const _bits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif