/*
Plantear un programa que permita jugar a los dados. Las reglas de juego son: se tiran tres dados si los tres salen con el mismo valor mostrar un mensaje que "gano", sino "perdió".

Lo primero que hacemos es identificar las clases:

Podemos identificar la clase Dado y la clase JuegoDeDados.

Luego los atributos y los métodos de cada clase:

Dado		
    atributos
        valor
    métodos
        tirar
        imprimir
        retornarValor

JuegoDeDados
    atributos
        3 Dado (3 objetos de la clase Dado)
    métodos
        jugar
Creamos un proyecto en el VisualStudio e implementamos el siguiente código.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Dado {
    int valor;
public:
    void tirar();
    void imprimir();
    int retornarValor();
};

class JuegoDeDados {
    Dado dado1, dado2, dado3; //define 3 atributos
    //no se usa el constructor JuegoDeDados porque no se tiene que inicializar los dados
public:
    void jugar();
};

void Dado::tirar()
{
    valor = rand() % 6 + 1;
}

void Dado::imprimir()
{
    cout << "Valor del Dado:" << valor << "\n";
}

int Dado::retornarValor()
{
    return valor;
}


void JuegoDeDados::jugar() 
{
    dado1.tirar();
    dado1.imprimir();
    dado2.tirar();
    dado2.imprimir();
    dado3.tirar();
    dado3.imprimir();
    if (dado1.retornarValor() == dado2.retornarValor() &&
        dado1.retornarValor() == dado3.retornarValor()) 
    {
        cout<<"Gano";
    }
    else 
    {
        cout<<"Perdio";        
    }
}

int main()
{
    srand(time(NULL));
    JuegoDeDados juego1;
    juego1.jugar();
    return 0;
}