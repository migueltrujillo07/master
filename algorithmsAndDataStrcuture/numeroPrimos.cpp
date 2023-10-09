#include<iostream>
#include<string>
using namespace std;

/* Calcular si un numero es primo o nel */

int main ()
{
  int Inumero;
  
  cout <<"Ingrese un numero" << endl;

  cin>> Inumero;

  if (Inumero == 1)
  {
    cout<<"El numero es primo" << endl;

  }
  else
  {
    for (int i = 2;  i <= Inumero; i++)
    {
      if (Inumero % i == 0)
      {
        cout <<"El numero no es primo" << endl;
        break;
      }
      else
      {
        cout <<"El numero es primo" << endl;
        break;
      }


    }
  }

  return 0;

}
