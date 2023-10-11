// Importación de librerias
#include<iostream>
#include<string>
#include<cmath>
using namespace std;


// Creación de la clase
class Ncomplejo
{
  public: // Atributos de los numeros complejos.
    int real,imaginario;
    Ncomplejo(float,float); //Constructor
    void imprimir();
};

class Operaciones //Clase con las operaciones a realizar.
{
  public:
    float z1R, z1i, z2R, z2i;
    Operaciones(float,float,float,float);
    void suma(); 
    void resta();
    void multiplicacion();
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
  int z3R, z3i, z3Raux, z3Ri, z3iR, z3ii;
  z3Raux = z1R * z2R;
  z3Ri = z1R * z2i;
  z3iR = z1i * z2R;
    
  z3ii = z1i * z2i * (-1); // Se multiplica por -1 debido a que esto representa i^2

  z3R = z3Raux + z3ii ;
  z3i = z3Ri + z3iR;

  cout <<"Multiplicación => (" <<z3R << ", " << z3i << "i)" << endl;
  
}

void Operaciones::division()
{
  float z3R, z3i, ziconju, z3RauxDividendo, z3iDividendo, divisor;
  ziconju = z2i * -1;

  z3RauxDividendo = (z1R*z2R) + (z1i*ziconju*-1);
  z3iDividendo = (z1R*ziconju) + (z1i*z2R);
  divisor = pow(z2R,2) - (pow(z2i,2)*-1);

  z3R = z3RauxDividendo / divisor;
  z3i = z3iDividendo / divisor;

  cout <<"División => (" <<z3R << ", " << z3i << "i)" << endl;
  
}

void Operaciones::punto()
{
  int v;
  v = (z1R*z2R) + (z1i*z2i);
  cout <<"Producto Punto => "<< v << endl;
}

void Operaciones::cruz()
{
  float k;
  k = (z1R*z2i)-(z1i*z2R);
  cout <<"Producto Cruz => " << k << endl;
}

int conjugado (int zR, int zi)
{
  int zic;
  zR = zR;
  zic = zi * -1;
  cout <<"El conjugado del numero es => (" << zR << ", " << zic << "i)" << endl; 
  return zic;
}

int norma (int zR, int zi)
{
  float norma;
  zR = pow(zR,2);
  zi = pow(zi,2);
  norma = sqrt(zR + zi);
  
  cout <<"La norma del vector es => " << norma << endl;
  return 0;
}

int main()
{
  // Creación de Numeros complejos
  int numa, numb, numc, numd ;
  cout <<"Ingrese la parte Real del primer numero: " << endl;
  cin >> numa;

  cout <<"Ingrese la parte Imaginaria del primer numero: " << endl;
  cin >> numb;

  cout <<"Ingrese la parte Real del segundo numero: " << endl;
  cin >> numc;

  cout <<"Ingrese la parte Imaginaria del segundo numero: " << endl;
  cin >> numd;

  Ncomplejo z1 = Ncomplejo(numa,numb);
  z1.imprimir();

  Ncomplejo z2 = Ncomplejo(numc,numd);
  z2.imprimir();

  Operaciones z3 = Operaciones(z1.real, z1.imaginario, z2.real, z2.imaginario);
  z3.suma();
  
  z3.resta();

  z3.multiplicacion();

  z3.division();

  z3.punto();

  z3.cruz();

  conjugado(z1.real,z1.imaginario);
  conjugado(z2.real,z2.imaginario);

  norma(z1.real,z1.imaginario);


  return 0;
}
  

