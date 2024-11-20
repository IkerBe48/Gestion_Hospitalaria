// Gestion_Hospitalaria.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <vector>

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
    int opcion;
    while (true) {
        cout << "------Menu------\n";
        cout << "1. Salir\n";
        cin >> opcion;

        switch (opcion) {
            case 1:
                return 0;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }
    }

    return 0;
}

