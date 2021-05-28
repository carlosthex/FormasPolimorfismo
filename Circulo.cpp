#include "Circulo.hpp"

void Circulo::calcularArea()
{
  cout << "Digite o valor do raio: ";
  cin >> raio;
  area = 3.14*(raio*raio);
  cout << "O valor da area do circulo é: " << area;
}