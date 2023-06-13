/*
Implementar la clase Operaciones. Al constructor llegan dos enteros que deben utilizarse en los métodos para calcular su suma, resta, multiplicación y división. imprimir dichos resultados.
*/
/*
El constructor tiene las siguientes características:

Tiene el mismo nombre de la clase.
Es el primer método que se ejecuta.
Se ejecuta en forma automática.
No puede retornar datos.
Se ejecuta una única vez.
Un constructor tiene por objetivo inicializar atributos.
*/
#include<iostream>

using namespace std;

class Operaciones {
private:
    int valor1,valor2;
public:
    Operaciones(int v1,int v2); //Constructor (Puede ser privado)
    void sumar();
    void restar();
    void multiplicar();
    void dividir();
};

Operaciones::Operaciones(int v1,int v2) //constructor
{
    valor1=v1;
    valor2=v2;
}

void Operaciones::sumar()
{
    int suma;
    suma=valor1+valor2;
    cout <<"La suma es:" <<suma <<"\n";
}

void Operaciones::restar()
{
    int resta;
    resta=valor1-valor2;
    cout <<"La resta es:" <<resta <<"\n";
}

void Operaciones::multiplicar()
{
    int multi;
    multi=valor1*valor2;
    cout <<"El producto es:" <<multi <<"\n";
}

void Operaciones::dividir()
{
    int division;
    division=valor1/valor2;
    cout <<"La division es:" <<division <<"\n";
}

int main()
{
    Operaciones operaciones1(100,50);
    operaciones1.sumar();
    operaciones1.restar();
    operaciones1.multiplicar();
    operaciones1.dividir();
    return 0;
}