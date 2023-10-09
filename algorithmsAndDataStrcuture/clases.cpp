// Importación de librerias
#include<iostream>
#include<string>
using namespace std;

// Creación de la clase
class Ncomplejo
{
  public: //Metodos, las operaciones a realizar
    int real,imaginario;
    Ncomplejo(float,float); //Constructor
    void imprimir();
};

class Operaciones
{
  public:
    float z1R, z1i, z2R, z2i;
    Operaciones(float,float,float,float);
    void suma(); //Done
    void resta(); //Done
    void multiplicacion(); //Done
    void division();
    void punto();
    void cruz();
    void potencia();
    void raiz();
};
//Constructor, Inicializamos los atributos
Ncomplejo::Ncomplejo(float _real, float _imaginario)
{
  real = _real;
  imaginario = _imaginario;

}

Operaciones::Operaciones(float _z1R, float _z1i, float _z2R, float _z2i)
{
  z1R = _z1R;
  z1i = _z1i;

  z2R = _z2R;
  z2i = _z2i;
}

void Ncomplejo::imprimir()
{
  cout<< "(" << real << ", " << imaginario << "i)" << endl;
}

void Operaciones::suma()
{
  int z3R, z3i;
  z3R = z1R + z2R;
  z3i = z1i + z2i;

  cout <<"Suma => (" <<z3R << ", " << z3i << "i)" << endl;
  
}

void Operaciones::resta()
{
  int z3R, z3i;
  z3R = z1R - z2R;
  z3i = z1i - z2i;

  cout <<"Resta => (" <<z3R << ", " << z3i << "i)" << endl;
  
}

void Operaciones::multiplicacion()
{
  int z3R, z3i, z3Ra, z3Ri, z3iR, z3ii;
  z3Ra = z1R * z2R;
  z3Ri = z1R * z2i;
  z3iR = z1i * z2R;
    
  z3ii = z1i * z2i * (-1);

  z3R = z3Ra + z3ii ;
  z3i = z3Ri + z3iR;


  cout <<"Multiplicación => (" <<z3R << ", " << z3i << "i)" << endl;
  
}

void Operaciones::division()
{
  float z3R, z3i;
  z3R = z1R / z2R;
  z3i = z1i / z2i;

  cout <<"División => (" <<z3R << ", " << z3i << "i)" << endl;
  
}
int main()
{
  // Creación de Numeros complejos
  Ncomplejo z1 = Ncomplejo(2,3);
  z1.imprimir();

  Ncomplejo z2 = Ncomplejo(5,6);
  z2.imprimir();

  Operaciones z3 = Operaciones(z1.real, z1.imaginario, z2.real, z2.imaginario);
  z3.suma();
  
  z3.resta();

  z3.multiplicacion();

  z3.division();
  return 0;
}
  

