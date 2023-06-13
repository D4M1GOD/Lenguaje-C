/*
Plantear una clase llamada Matematica que implemente cuatro métodos llamados mayor. El primero que reciba como parámetros dos enteros y devuelva el mayor de ellos. El segundo que reciba tres enteros y devuelva el mayor. Los mismo deben hacer los siguientes dos métodos pero recibiendo parámetros de tipo float.
*/
#include<iostream>

using namespace std;

class Matematica {
public:
    int mayor(int x1,int x2);
    int mayor(int x1,int x2,int x3);
    float mayor(float x1,float x2);
    float mayor(float x1,float x2,float x3);
};

int Matematica::mayor(int x1,int x2)
{
    if (x1>x2)
        return x1;
    else
        return x2;
}

int Matematica::mayor(int x1,int x2,int x3)
{
    if (x1>x2 && x1>x3)
        return x1;
    else
        if (x2>x3)
            return x2;
        else 
            return x3;
}

float Matematica::mayor(float x1,float x2)
{
    if (x1>x2)
        return x1;
    else
        return x2;
}

float Matematica::mayor(float x1,float x2,float x3)
{
    if (x1>x2 && x1>x3)
        return x1;
    else
        if (x2>x3)
            return x2;
        else 
            return x3;
}

int main()
{
    Matematica m1;
    cout<<"Mayor entre 6 y 8 : ";
    cout<<m1.mayor(6,8);
    cout <<"\n";
    cout<<"Mayor entre 10, 40 y 5 : ";
    cout<<m1.mayor(10,40,5);
    cout <<"\n";
    cout<<"Mayor entre 6.2  y  9.3 : ";
    cout<<m1.mayor(6.2f,9.3f);
    cout <<"\n";
    cout<<"Mayor entre 7 , 12.5  y  4.2 : ";
    cout<<m1.mayor(7.0f,12.5f,4.2f);
    cout <<"\n";
    return 0;
}