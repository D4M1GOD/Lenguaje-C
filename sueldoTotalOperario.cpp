#include<iostream> // include permte importar librerias de funciones y objeto en otros archivos

using namespace std; // Libreria para usar cin & cout

int main()
{
    int horasTrabajadas; //tipo de variable entero
    float costoHora; // tipo de variable flotante
    float sueldo;
    cout <<"Ingrese Horas trabajadas por el operario:"; //mostrar mensaje en pantalla
    cin >>horasTrabajadas; // Leer variable por teclado
    cout <<"Ingrese el pago por hora:";
    cin >>costoHora;
    sueldo = horasTrabajadas * costoHora;
    cout <<"El sueldo total del operario es:";
    cout <<sueldo; //mostrar en pantalla el valor que contiene la variable
    return 0;
}