/*
Realizar la carga del lado de un cuadrado, mostrar por pantalla 
el perímetro del mismo (El perímetro de un cuadrado se calcula 
multiplicando el valor del lado por cuatro)
*/

#include<iostream>
using namespace std;

int main(void)
{
    float lado, perimetro;
    cout <<"Ingrese el valor del lado del cuadrado: ";
    cin >> lado;
    perimetro = lado * 4;
    cout << "El perímetro del cuadrado es: " << perimetro << endl;
    return 0;
}