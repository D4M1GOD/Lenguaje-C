/*
Estructura condicional
Ingresar el sueldo de una persona, si supera los 3000 pesos
 mostrar un mensaje en pantalla indicando que debe abonar impuestos.
*/

#include<iostream>

using namespace std;

int main()
{
    float sueldo;
    cout <<"Ingrese el sueldo:";
    cin >>sueldo;
    if (sueldo>3000) 
    {
        cout <<"Esta persona debe abonar impuestos";
    }    
    return 0;
}