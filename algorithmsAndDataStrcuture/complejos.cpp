// Importación de librerias

#include<iostream>
#include<string>
using namespace std;

// Creación de la clase

class Ncomplejo
{

  public: //Metodos, las operaciones a realizar
    Ncomplejo(int,int); //Constructor
    int real;
    int imaginario;
    int imprimir();
    int suma();
    int resta();
    int multiplicacion();
    int division();
    int punto();
    int cruz();
    int potencia();
    int raiz();



};
//Constructor, Inicializamos los atributos
Ncomplejo::Ncomplejo(int _real, int _imaginario)
{
  real = _real;
  imaginario = _imaginario;

}

void Ncomplejo::imprimir()
{
  cout<< "(" << real << ", " << imaginario << "i)" << endl;
}

void Ncomplejo::suma()
{
  int z1, z2;
  int z3R =  z1.real + z2.real;
  int z3i = z1.imaginario + z2.imaginario; 
}



int main()
{
  Ncomplejo z1 = Ncomplejo(2,3);
  z1.imprimir();

  Ncomplejo z2 = Ncomplejo(5,6);
  z2.imprimir();

  

  return 0;
  
}
