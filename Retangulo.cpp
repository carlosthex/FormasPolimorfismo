#include "Retangulo.hpp"

void Retangulo::calcularArea()
{
  cout << "\n\nDigite o valor da base: ";
  cin >> base;
  cout << "Digite o valor da altura: ";
  cin >> altura;
  area = base*altura;
  cout << "\nO valor da area do retangulo é: " << area;
}