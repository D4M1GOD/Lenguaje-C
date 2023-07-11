/*
Plantear una clase que permita administrar un vector de enteros. En el constructor solicitar al operador que ingrese la cantidad de componentes que tendrá el vector y lo cree y localice en la pila dinámica. Hacer un método que lo imprima y finalmente en el destructor eliminar el espacio ocupado por el vector creado previamente.
*/
#include<iostream>

using namespace std;

class Vector {
    int *p;
    int tamano;
public:
    Vector();
    void cargar();
    void imprimir();
    ~Vector();
};

Vector::Vector()
{
    cout <<"Cuantos elementos tendra el vector:";
    cin >>tamano;
    p=new int[tamano];
}

void Vector::cargar()
{
    for(int f=0;f<tamano;f++)
    {
        cout <<"Ingrese elemento:";
        cin>>p[f];
    }
}

void Vector::imprimir()
{
    for(int f=0;f<tamano;f++)
    {
        cout<<p[f];
        cout<<"-";
    }
}

Vector::~Vector()
{
    delete []p;
}

int main()
{
    Vector vector1;
    vector1.cargar();
    vector1.imprimir();
    return 0;
}