/*
Confeccionar un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes:
Si el promedio es >=7 mostrar "Promocionado".
Si el promedio es >=4 y <7 mostrar "Regular".
Si el promedio es <4 mostrar "Reprobado".
*/
#include<iostream>

using namespace std;

int main()
{
    int nota1,nota2,nota3;
    cout <<"Ingrese primer nota:";
    cin >>nota1;
    cout <<"Ingrese segunda nota:";
    cin >>nota2;
    cout <<"Ingrese tercer nota:";
    cin >>nota3;
    int promedio=(nota1 + nota2 + nota3) / 3;
    if (promedio >= 7) 
    {
        cout <<"Promocionado";    
    } 
    else 
    {
        if (promedio >= 4) 
        {
            cout <<"Regular";
        }
        else 
        {
            cout <<"Reprobado";
        }
    }
    return 0;
}