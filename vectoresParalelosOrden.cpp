/*
Confeccionar un programa que permita cargar los nombres de 5 alumnos y sus notas respectivas. Luego ordenar las notas de mayor a menor. Imprimir las notas y los nombres de los alumnos.
*/
#include<iostream>
#include <cstring>

using namespace std;

class NotaAlumnos {
private:
    char nombres[5][40];
    int notas[5];
public:
    void cargar();
    void ordenar();
    void imprimir();
};


void NotaAlumnos::cargar()
{
    cout <<"Carga de nombres y notas"<<"\n";
    for(int f=0;f < 5;f++) 
    {
        cout <<"Ingese el nombre del alumno:";
        cin.getline(nombres[f],40);
        cout <<"Ingrese la nota del alumno:";
        cin >>notas[f];
        cin.get();
    }
}

void NotaAlumnos::ordenar()
{
    for (int k = 0; k < 5; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (notas[f] < notas[f + 1])
            {
                int auxnota;
                auxnota = notas[f];
                notas[f] = notas[f + 1];
                notas[f + 1] = auxnota;
                char auxnombre[40];
                strcpy(auxnombre, nombres[f]);
                strcpy(nombres[f], nombres[f + 1]);
                strcpy(nombres[f + 1], auxnombre);
            }
        }
    }
}

void NotaAlumnos::imprimir()
{
    cout <<"Nombres de alumnos y notas de mayor a menor"<<"\n";
    for(int f=0;f < 5;f++) 
    {
        cout <<nombres[f] <<" - " <<notas[f] <<"\n";
    }
    cin.get();
}

int main()
{
    NotaAlumnos na;
    na.cargar();
    na.ordenar();
    na.imprimir();
    return 0;
}
