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
// Clase Cita
class Cita {
public:
    unique_ptr<Paciente> paciente;
    unique_ptr<Medico> medico;
    string fecha;
    int urgencia; // 1: baja, 2: media, 3: alta

    Cita(Paciente* p, Medico* m, string fecha, int urgencia)
        : paciente(p), medico(m), fecha(fecha), urgencia(urgencia) {
    }
};

// Clase Hospital
class Hospital {
private:
    vector<unique_ptr<Paciente>> pacientes;
    vector<unique_ptr<Medico>> medicos;
    vector<unique_ptr<Cita>> citas;
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

