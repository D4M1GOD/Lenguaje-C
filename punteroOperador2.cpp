/*
Plantear una clase para administrar un vector de 5 enteros. Definir además del método para cargar el vector un método que imprima las componentes empleando un puntero que avance por todas las direcciones de las componentes utilizando el operador ++.
*/
#include<iostream>

using namespace std;

class Vector {
    int vec[5];
public:
    void cargar();
    void imprimir();
};

void Vector::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese componente:";
        cin >> vec[f];
    }
}

void Vector::imprimir()
{
    int *pe;
    pe = vec;
    for (int f = 0; f < 5; f++)
    {
        cout << *pe;
        pe++;
        cout << "-";
    }
}

int main()
{
    Vector vector1;
    vector1.cargar();
    vector1.imprimir();
    return 0;
}