/*
Crear una clase llamada EstructuraVector. Definir un atributo de tipo vector de 5 elementos enteros. Declarar dos constructores, uno sin parámetros que cargue el vector con valores cero y otro constructor que reciba un entero indicando el valor entero con el que deben inicializarse las componentes.
*/
#include<iostream>

using namespace std;

class EstructuraVector {
    int vec[5];
public:
    EstructuraVector();
    EstructuraVector(int valor);
    void imprimir();
};

EstructuraVector::EstructuraVector()
{
    for(int f=0;f<5;f++)
        vec[f]=0;
}

EstructuraVector::EstructuraVector(int valor)
{
        for(int f=0;f<5;f++)
        vec[f]=valor;
}

void EstructuraVector::imprimir()
{
    for(int f=0;f<5;f++)
    {
        cout <<vec[f];
        cout <<"-";
    }
    cout<<"\n\n";
}

int main()
{
    EstructuraVector v1;
    v1.imprimir();
    EstructuraVector v2(12);
    v2.imprimir();
    return 0;
}