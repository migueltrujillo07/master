#include<iostream>
#include<string>
using namespace std;

int main()
{
  int value = 0;
  int* ptr = &value; // Puntero , despues del tipo de dato colocar un*

  cout << ptr << endl;
  cout << *ptr << endl;

  *ptr = 1;
  cout <<value << endl;


}
