// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Complex.h"

using namespace cs_linear;

int main()
{
    Complex<int> y;
    Complex<int> z; 

    y.setRe(1);
    y.setIm(-2);
    std::cout << "y = ";
    y.printRect();
    std::cout << std::endl;

    std::cout << "z = ";
    z.printRect();
    std::cout << std::endl;


}


