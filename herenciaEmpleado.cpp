/*
Confeccionar una clase Persona que tenga como atributos el nombre y la edad. Definir como responsabilidades un método que cargue los datos personales y otro que los imprima.
Plantear una segunda clase Empleado que herede de la clase Persona. Añadir un atributo sueldo y los métodos de cargar el sueldo e imprimir su sueldo.
Definir un objeto de la clase Persona y llamar a sus métodos. También crear un objeto de la clase Empleado y llamar a sus métodos.
*/

#include<iostream>

using namespace std;

class Persona {
protected:
    char nombre[40];
    int edad;
public:
    void cargarDatosPersonales();
    void imprimirDatosPersonales();
};

class Empleado : public Persona {
private:
    float sueldo;
public:
    void cargarSueldo();
    void imprimirSueldo();
};


void Persona::cargarDatosPersonales()
{
    cout << "Ingrese nombre:";
    cin.getline(nombre, 40);
    cout << "Ingrese edad:";
    cin >> edad;
    cin.get();
}

void Persona::imprimirDatosPersonales()
{
    cout << "Nombre:"<<nombre<<"\n";
    cout << "Edad:" << edad << "\n";
}


void Empleado::cargarSueldo()
{
    cout << "Ingrese sueldo:";
    cin >> sueldo;
}

void Empleado::imprimirSueldo()
{
    cout << "Sueldo:" << sueldo << "\n";
}


int main()
{
    Persona persona1;
    persona1.cargarDatosPersonales();
    persona1.imprimirDatosPersonales();

    Empleado empleado1;
    empleado1.cargarDatosPersonales();
    empleado1.cargarSueldo();
    empleado1.imprimirDatosPersonales();
    empleado1.imprimirSueldo();
    return 0;
}