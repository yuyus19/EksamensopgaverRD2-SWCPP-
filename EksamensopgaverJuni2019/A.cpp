#include "A.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include <exception>

A::A()
{

}

void A::f(int a, int b)
{

    try {
       g(a,b);
     } catch (std::exception& e) {
       g(a,b);
     }
}

void A::g(int a, int b)
{



    if(a < 0 && b < 0){
        throw std::invalid_argument( " a and b has a negative value" );
    }else if (a > 0 && b > 0){
        throw std::invalid_argument( " a and b has a positive value" );
    }



    if(a == 0 && (b > 0) ){
        throw std::invalid_argument( " a is equal to '0' and b is positive " );
    }

    else if(a == 0 && b < 0){
        throw std::invalid_argument( " a is equal to '0' and b is negative " );
    }


    if(b == 0 && (a > 0) ){
        throw std::invalid_argument( " b is equal to '0' and a is positive " );
    }

    else if(b == 0 && a < 0){
        throw std::invalid_argument( " b is equal to '0' and a is negative " );
    }

}





