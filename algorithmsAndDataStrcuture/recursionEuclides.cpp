#include<iostream>
#include<string>
using namespace std;

// Algoritmo de Euclides Con Recursividad
// Miguel Trujillo Lopez

int euclides(int, int) ;

int main ()
{
  int numa;
  int numb;

  cout << "Ingrese el primer numero" << endl;
  cin >> numa;

  cout <<"Ingrese el segundo numero" << endl;
  cin >> numb;

  euclides(numa, numb);
  
  return 0;
}

int euclides(int numa, int numb)
{
  if (numb == 0)
  {
    cout <<"El MCD es: " << numa << endl;
  }
  else
  {
    if (numa > numb)
    {
      numa = numa - numb;
      euclides(numa, numb);
    }
    else
    {
      numb = numb - numa;
      euclides(numa, numb);
    }
  }
  return numb;

}
