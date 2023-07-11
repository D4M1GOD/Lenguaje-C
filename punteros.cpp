#include <iostream>

using namespace std;

int main()
{
    int x = 10; //entero
    int *pe; //puntero es el que apunta
    pe = &x; //direccion del puntero
    cout << x;         // 10
    cout << "\n";
    cout << *pe;       // imprime lo apuntado por pe: 10
    cout << "\n";
    *pe = 5;           //asignamos 5 a lo apuntado por pe
    cout << x;         // 5
    cout << "\n";
    float valor = 10.9;
    float *pf;
    pf = &valor;
    cout << *pf;      //imprimime lo apuntado por pf: 10.9
    return 0;
}
