#include<iostream>
using namespace std;

namespace mi_espacio {

   int x = 5;

   int y = 10;

   int suma() { return x + y; }

}



int main() {

   // Se utiliza la declaración using para acceder a los elementos del namespace

   using mi_espacio::x;

   using mi_espacio::y;

   using mi_espacio::suma;

   cout << x << endl; //sin namespace "std" -> std::cout << x << std::endl;

   cout << y << endl;

   cout << suma() << endl;

   return 0;

}