#include "Triangulo.hpp"

void Triangulo::calcularArea()
{
  cout << "\n\nDigite o valor da base: ";
  cin >> base;
  cout << "Digite o valor da altura: ";
  cin >> altura;
  area = (base*altura)/2;
  cout << "\nO valor da area do triangulo é: " << area;
}