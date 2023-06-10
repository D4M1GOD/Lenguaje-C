/*
    Errores sintacticos: errores tipograficos.
    Errores logicos dificiles de localizar.
*/
#include<iostream>

using namespace std;

int main()
{
    int lado;
    int superficie;
    cout <<"Ingrese el valor del lado del cuadrado:"; //(Erro sintactico olvidar el ;)
    cin >>lado; //(Erro sintactico usar en esta lina la variable Lado)
    superficie = lado * lado;
    // superficie = lado * lado * lado; (Error logico)
    cout <<"La superficie del cuadrado es:";
    cout <<superficie;
    return 0;
}