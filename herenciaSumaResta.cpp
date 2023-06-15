/*
Ahora plantearemos el primer problema utilizando herencia. Supongamos que necesitamos implementar dos clases que llamaremos Suma y Resta. Cada clase tiene como atributo valor1, valor2 y resultado. Los métodos a definir son cargar1 (que inicializa el atributo valor1), carga2 (que inicializa el atributo valor2), operar (que en el caso de la clase "Suma" suma los dos atributos y en el caso de la clase "Resta" hace la diferencia entre valor1 y valor2, y otro método mostrarResultado)

Si analizamos ambas clases encontramos que muchos atributos y métodos son idénticos. En estos casos es bueno definir una clase padre que agrupe dichos atributos y responsabilidades comunes.

La relación de herencia que podemos disponer para este problema es:

                                        Operacion

                        Suma                              Resta
Solamente el método operar es distinto para las clases Suma y Resta (esto hace que no lo podamos disponer en la clase Operacion), luego los métodos cargar1, cargar2 y mostrarResultado son idénticos a las dos clases, esto hace que podamos disponerlos en la clase Operacion. Lo mismo los atributos valor1, valor2 y resultado se definirán en la clase padre Operacion.
*/
#include<iostream>

using namespace std;

class Operacion {
protected:
    int valor1;
    int valor2;
    int resultado;
public:
    void cargar1();
    void cargar2();
    void mostrarResultado();
};


class Suma: public Operacion{
public:
    void operar();
};


class Resta : public Operacion {
public:
    void operar();
};


void Operacion::cargar1()
{
    cout << "Ingrese primer valor:";
    cin >> valor1;
}

void Operacion::cargar2()
{
    cout << "Ingrese segundo valor:";
    cin >> valor2;
}

void  Operacion::mostrarResultado()
{
    cout <<resultado<<"\n";
}

void Suma::operar()
{
    resultado = valor1 + valor2;
}

void Resta::operar()
{
    resultado = valor1 - valor2;
}


int main()
{
    Suma suma1;
    suma1.cargar1();
    suma1.cargar2();
    suma1.operar();
    cout << "La suma de los dos valores es:";
    suma1.mostrarResultado();

    Resta resta1;
    resta1.cargar1();
    resta1.cargar2();
    resta1.operar();
    cout << "La diferencia de los dos valores es:";
    resta1.mostrarResultado();

    return 0;
}