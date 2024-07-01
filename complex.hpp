#ifndef COMPLEX_HPP
#define COMPLEX_HPP

c:wqlass Complex
{
  public:
    Complex(double r, double j); //Custom constructor
    Complex(const Complex &cop); //constructor copia
    Complex &operator=(const Complex  &cop);//operador asignacion
    double real;//atributo numero real
    double imag;//atributo numero imaginario
    float norm();
    ~Complex();//destructor
              
    Complex(); //default constructor base privado

};

#endif

