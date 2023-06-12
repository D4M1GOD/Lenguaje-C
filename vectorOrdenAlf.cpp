/*
Definir un vector donde almacenar los nombres de 5 países. Confeccionar el algoritmo de ordenamiento alfabético.
*/
#include <iostream>
#include <cstring>

using namespace std;

class OrdenamientoPaises {
private:
    char paises[5][40];
public:
    void cargar();
    void ordenar();
    void imprimir();
};

void OrdenamientoPaises::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese el nombre del país: ";
        cin.getline(paises[f], 40);
    }
}

void OrdenamientoPaises::ordenar()
{
    for (int k = 0; k < 4; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (strcmp(paises[f], paises[f + 1]) > 0)
            {
                char aux[40];
                strcpy(aux, paises[f]);
                strcpy(paises[f], paises[f + 1]);
                strcpy(paises[f + 1], aux);
            }
        }
    }
}

void OrdenamientoPaises::imprimir()
{
    cout << "Paises ordenados en forma alfabética:\n";
    for (int f = 0; f < 5; f++)
    {
        cout << paises[f] << "\n";
    }
    cin.get();
}

int main()
{
    OrdenamientoPaises op;
    op.cargar();
    op.ordenar();
    op.imprimir();
    return 0;
}
