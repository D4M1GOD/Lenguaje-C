/*
Confeccionar una clase llamada Sumatoria que solicite la carga valores enteros por teclado. Finalizar la carga de valores al ingresar el cero. Mostrar en el destructor la suma de los valores ingresados.
*/
#include <iostream>

using namespace std;

class Sumatoria {
private:
    int suma;
public:
    void cargar();
    ~Sumatoria();
};


void Sumatoria::cargar()
{
    int valor;
    suma = 0;
    do {
        cout << "Ingrese un valor (0 para finalizar):";
        cin >> valor;
        suma = suma + valor;
    } while (valor != 0);
}

Sumatoria::~Sumatoria()
{
    cout << "La suma de todos los valores ingresados es:";
    cout << suma;
    cin.get();
    cin.get();
}


int main()
{
    Sumatoria sumatoria1;
    sumatoria1.cargar();
    return 0;
}