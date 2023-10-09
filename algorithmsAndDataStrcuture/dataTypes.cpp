#include <iostream>
#include <string>
using namespace std;


int main ()
{
  int num1;
  int num2;

  cout << "Escriba un numerito" << endl;
  cin >> num1 ;

  cout <<"Escriba un segundo numero" << endl;
  cin >> num2; 


  if (num1 - 1 < num2)
  {
    num1++;
    if (num1 == num2)
    {
      cout <<"num1 alcanzó al num2 :D"<< endl;

      cout <<num1 << endl;
      cout <<num2 << endl;
      }

  }

  else
  {
    cout <<"El primer numero esta alejado " << endl;
  }




  return 0;

}
