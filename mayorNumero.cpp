/*
Realizar un programa que solicite ingresar dos números distintos y muestre por pantalla el mayor de ellos.
Estructura condicional propuesta
*/
#include<iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout <<"Ingrese primer valor:";
    cin >>num1;
    cout <<"Ingrese segundo valor:";
    cin >>num2;
    if (num1 > num2)
    {
        cout <<num1;
    }
    else
    {
        cout <<num2;
    }    
    return 0;
}