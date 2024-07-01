#include <iostream>
#include <cmath>

#include "complex.hpp" //se incluye el header
Complex::Complex(){//default en 0.0+0.0i
  real=0.0;
  imag=0.0;
}
Complex::Complex (double r, double j){
  real=r;
  imag=j;
}

Complex::~Complex(){

}


Complex::Complex(const Complex &cop){
  std::cout<<"copy constructor invoked"<<std::endl;

  real=cop.real;
  imag=cop.imag;

}

Complex &Complex::operator=(const Complex &cop){
  std::cout<<"assigment operator invoke"<<std::endl;

  real=cop.real;
  imag=cop.imag;

  return *this;
}

float Complex::norm(){
 double real2=real*real;
 double imag2=imag*imag;
  return std::sqrt(real2 + imag2);
}






