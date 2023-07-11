#include<iostream>

using namespace std;
#include <cstring>

int main()
{
    char cad[5];
    strcpy(cad, "Sol");
    char *pc;
    pc = cad;
    cout << pc;        //imprime Sol
    cout << "\n";
    pc++;
    cout << pc;        //imprime ol
    cout << "\n";
    pc++;
    cout << pc;        //imprime l
    cout << "\n";
    pc--;
    cout << pc;        //imprime ol
    cout << "\n";
    int x[5] = { 10, 50, 100, 99, 33 };
    int *pe;
    pe = &x[3];
    cout << *pe;    //imprime 99
    cout << "\n";
    pe--;
    cout << *pe;    //imprime 100
    return 0;
}