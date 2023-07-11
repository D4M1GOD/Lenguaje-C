/*
Crear una matriz de 3 filas por 3 columnas. Implementar un método que permita cargar todas sus componentes, otro que la imprima y otra método que retorne la fila y columna (retorna dos datos el método) donde se encuentra el mayor elemento del vector (si está repetido retorne la posición de cualquiera de ellos)
*/
#include<iostream>

using namespace std;

class Matriz {
private:
    int mat[3][3];
public:
    void cargar();
    void imprimir();
    void retornarFilaColumna(int *pf, int *pc);
};

void Matriz::cargar()
{
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << "Ingrese componente:";
            cin >> mat[f][c];
        }
    }
}

void Matriz::imprimir()
{
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << mat[f][c] << " ";
        }
        cout << "\n";;
    }
}

void Matriz::retornarFilaColumna(int *pf, int *pc)
{
    int mayor = mat[0][0];
    *pf = 0;
    *pc = 0;
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (mat[f][c] > mayor)
            {
                mayor = mat[f][c];
                *pf = f;
                *pc = c;
            }
        }
    }
}


int main()
{
    Matriz matriz1;
    matriz1.cargar();
    matriz1.imprimir();
    int fila,  columna;
    matriz1.retornarFilaColumna(&fila, &columna);
    cout << "Fila donde se encuentra el mayor:" << fila <<"\n";
    cout << "Columna donde se encuentra el mayor:" << columna<< "\n";
    return 0;
}