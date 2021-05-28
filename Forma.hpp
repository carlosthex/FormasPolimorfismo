#include <iostream>
using namespace std;
#ifndef Forma_hpp
#define Forma_hpp

class Forma
{
  public:
  virtual void calcularArea() = 0;
  protected:
  float area;
};
#endif