#include <iostream>

//#include "Complex.h"

namespace cs_linear {

    template <class T>
    const typename Complex<T>::value_type Complex<T>::DEFAULT_VALUE =
        Complex<T>::value_type();






    template <class T>
    Complex<T>::Complex(value_type t_real, value_type t_im)
    {
        setRe(t_real);
        setIm(t_im);
    }






    template <class T>
    void Complex<T>::setRe(const value_type& t_real)
    {     
        real_ = t_real;
    }






    template <class T>
    void Complex<T>::setIm(const value_type& t_im)
    {
        im_ = t_im;
    }






    template <class T>
    typename Complex<T>::value_type Complex<T>::getRe() const
    {
        return real_;
    }







    template <class T>
    typename Complex<T>::value_type Complex<T>::getIm() const
    {
        return im_;
    }







    template <class T>
    Complex<T> Complex<T>::operator+(const Complex& rhs) const
    {
        return Complex(real_ + rhs.real_, im_ + rhs.im_);
    }






    template <class T>
    Complex<T> Complex<T>::operator-(const Complex& rhs) const
    {
        return Complex(real_ - rhs.real_, im_ - rhs.im_);
    }






    template <class T>
    Complex<T> Complex<T>::operator*(const Complex& rhs) const
    {
        return Complex((real_ * rhs.real_) + (im_ * rhs.im_),
            (im_ * rhs.real_) + (real_ * rhs.im_));
    }






    template <class T>
    void Complex<T>::printRect() const
    {
        if (im_ >= 0)
        {
            std::cout << real_ << "+" << im_ << "i";
        }
        else
        {
            std::cout << real_ << im_ << "i";
        } 
    }
}