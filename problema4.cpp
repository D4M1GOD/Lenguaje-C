/*
    Se debe desarrollar un programa que pida el ingreso del 
    precio de un artículo y la cantidad que lleva el cliente. 
    Mostrar lo que debe abonar el comprador.
*/
#include<iostream>
using namespace std;

int main()
{
    float precioArticulo, cantidad;
    cout <<"Ingrese el precio del articulo:"; 
    cin >> precioArticulo;
    cout <<"Ingrese la cantidad que el cliente quiere llevar de articulo: ";
    cin >> cantidad;
    cout <<"El cliente debe abonar:";
    cout << precioArticulo * cantidad;
    return 0;
}