/*
Desarrollar un programa que permita cargar 5 nombres de personas y sus edades respectivas. Luego de realizar la carga por teclado de todos los datos imprimir los nombres de las personas mayores de edad (mayores o iguales a 18 años)
*/
#include<iostream>

using namespace std;

class PersonasEdades {
private:
    char nombres[5][40];
    int edades[5];
public:
    void cargar();
    void mayoresEdad();
};

void PersonasEdades::cargar()
{
    for(int f=0;f < 5;f++) 
    {
        cout <<"Ingrese nombre:";
        cin.getline(nombres[f],40);
        cout <<"Ingrese edad:";
        cin >>edades[f];
        cin.get();
    }
}

void PersonasEdades::mayoresEdad()
{
    cout <<"Personas mayores de edad.";
    cout <<"\n";
    for(int f=0;f < 5;f++) 
    {
        if (edades[f] >= 18) 
        {
            cout <<nombres[f];
            cout <<"\n";
        }
    }
    cin.get();
}

int main()
{
    PersonasEdades pe;
    pe.cargar();
    pe.mayoresEdad();
    return 0;
}