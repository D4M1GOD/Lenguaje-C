/*
    Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.
*/ 

#include<iostream>
using namespace std;

int main()
{
    float num1, num2, num3, num4, suma, promedio;
    cout <<"Ingrese primer valor:";
    cin >>num1;
    cout <<"Ingrese segundo valor:";
    cin >>num2;
     cout <<"Ingrese tercer valor:";
    cin >>num3;
    cout <<"Ingrese cuarto valor:";
    cin >>num4;
    suma = num1 + num2 + num3 + num4;
    promedio = suma/4;
    cout <<"El producto del tercer valor y cuarto valor es: ";
    cout <<promedio;
    return 0;
}