// Gestion_Hospitalaria.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

// Clase Paciente
class Paciente {
public:
    string nombre;
    string id;
    string fechaIngreso;
    string historialClinico;
};

// Clase Medico
class Medico {
public:
    string nombre;
    string especialidad;
    bool disponible;
};

int main()
{
    std::cout << "Hello World!\n";
}

