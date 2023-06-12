/*
Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
Imprimir los gastos en sueldos de cada turno.
*/
#include<iostream>

using namespace std;

class PruebaVector3{
private:
    float turnoMan[4];
    float turnoTar[4];
public:
    void cargar();
    void calcularGastos();
};

void PruebaVector3::cargar()
{
    cout <<"Sueldos de empleados del turno de la mañana.";
    cout <<"\n";
    for(int f = 0; f < 4; f++) 
    {
        cout <<"Ingrese sueldo:";
        cin >>turnoMan[f];
    }
    cout <<"Sueldos de empleados del turno de la tarde.";
    cout <<"\n";
    for(int f = 0; f < 4; f++) 
    {
        cout <<"Ingrese sueldo:";
        cin >>turnoTar[f];
    }
}

void PruebaVector3::calcularGastos()
{
    float man=0;
    float tar=0;
    for(int f = 0; f < 4; f++)
    {
        man=man+turnoMan[f];
        tar=tar+turnoTar[f];
    }
    cout <<"Total de gastos del turno de la mañana:";
    cout <<man;
    cout <<"\n";
    cout <<"Total de gastos del turno de la tarde:";
    cout <<tar;
    cin.get();
    cin.get();
}

int main()
{
    PruebaVector3 pv3;
    pv3.cargar();
    pv3.calcularGastos();
    return 0;
}