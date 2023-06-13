#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Dado {
private: //parte privada
    int valor;
    void separador(); //no se puede llamar desde el main, permite encapsular problemas
public: //parte publica
    void tirar();
    void imprimir();
};

void Dado::separador()
{
    cout<<"********************";
    cout<<"\n";
}

void Dado::tirar()
{
    srand (time(NULL));
    valor = rand() % 6 + 1;//numero random
}

void Dado::imprimir()
{
    separador(); //metodo privado usado
    cout<<valor;
    cout<<"\n";
    separador();
}

int main()
{
    Dado d;
    d.tirar();
    d.imprimir();
    //d.separador(); ERROR: metodo privado
    //d.valor=9; ERROR: atributo privado
    return 0;
}