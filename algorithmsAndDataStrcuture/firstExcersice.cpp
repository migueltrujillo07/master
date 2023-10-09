#include<iostream>
#include<string>
using namespace std;

/* Escriba un programa que tome dos números y un operador matemàtico
 * (+, -, *, /) como entrada y realice la operacion correspondiente 
 * utilizando una declaración condicional
 */

int main()
{
  int price = 900;
  int disc = 100;

  if (price >= 1000)
  {
    int newPrice = price - disc;
    cout << "Precio final" << endl;
    cout << newPrice << endl;

  }


  
  else
  {
    cout << "El precio no aplica descueno" << endl;
    cout << "Precio final: " << endl;
    cout << price << endl;

  }
  
  return 0;
}
