#include <iostream>
#include <cmath>

#include "complex.hpp"


int main(){
  double r=2.0;
  double j=1.0;

  Complex num(r,j);

  std::cout<<num.norm()<<std::endl;
 
  return 0;
}
