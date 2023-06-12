/*
Crear y cargar una matriz de 4 filas por 4 columnas. Imprimir la diagonal principal.
*/
#include<iostream>

using namespace std;

class Matriz2 {
private:
    int mat[4][4];
public:
    void cargar();
    void imprimirDiagonalPrincipal();
};

void Matriz2::cargar()
{
    for(int f = 0; f < 4; f++) 
    {
        for(int c = 0; c<4; c++) 
        {
            cout <<"Ingrese componente [" << f << "]" << "[" << c << "]" << endl;
            cin >> mat[f][c];
        }
    }
}

void Matriz2::imprimirDiagonalPrincipal()
{
    for(int k = 0; k < 4; k++) 
    {
        cout <<mat[k][k] <<" ";
    }
    cin.get();
    cin.get();
}

int main()
{
    Matriz2 m;
    m.cargar();
    m.imprimirDiagonalPrincipal();
    return 0;
}