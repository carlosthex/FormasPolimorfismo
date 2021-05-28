#include "Forma.hpp"

class Retangulo : public Forma
{
  public:
  void calcularArea();
  private:
  float base;
  float altura;
  float area;
};