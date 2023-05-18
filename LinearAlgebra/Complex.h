#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

namespace cs_linear
{
    template <class T>
    class Complex
    {
    public:
        typedef T value_type;
        static const value_type DEFAULT_VALUE;
        Complex(value_type t_real = DEFAULT_VALUE,
            value_type t_im = DEFAULT_VALUE);
        void setRe(const value_type& t_real);
        void setIm(const value_type& t_im);
        value_type getRe() const;
        value_type getIm() const;
        Complex operator+(const Complex& rhs) const;
        Complex operator-(const Complex& rhs) const;
        Complex operator*(const Complex& rhs) const;
        void printRect() const;
    private:
        value_type real_;
        value_type im_;
    };

}

#include "Complex.cpp"

#endif