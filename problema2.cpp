/*
Escribir un programa en el cual se ingresen cuatro números, 
calcular e informar la suma de los dos primeros y el producto 
del tercero y el cuarto.
*/
#include<iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, suma, producto;
    cout <<"Ingrese primer valor:";
    cin >>num1;
    cout <<"Ingrese segundo valor:";
    cin >>num2;
     cout <<"Ingrese tercer valor:";
    cin >>num3;
    cout <<"Ingrese cuarto valor:";
    cin >>num4;
    suma = num1 + num2;
    producto = num3 * num4;
    cout <<"La suma del primer valor y segundo valor es:";
    cout <<suma;
    cout <<"\n";
    cout <<"El producto del tercer valor y cuarto valor es:";
    cout <<producto;
    return 0;
}