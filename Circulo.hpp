#include "Forma.hpp"

class Circulo : public Forma
{
  public:
  void calcularArea();
  private:
  float raio;
  float area;
};