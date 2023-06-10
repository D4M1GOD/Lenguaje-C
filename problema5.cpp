/*
Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos.
(Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)
*/
#include<iostream>

using namespace std;

int main()
{
    int num;
    cout <<"Ingrese un valor entero de 1 o 2 digitos:";
    cin >>num;
    if (num < 10) 
    {
        cout <<"Tiene un digito";
    }
    else 
    {
        cout <<"Tiene dos digitos";
    }    
    return 0;
}