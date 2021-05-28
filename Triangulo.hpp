#include "Forma.hpp"

class Triangulo : public Forma
{
  public:
  void calcularArea();
  private:
  float base;
  float altura;
  float area;
};