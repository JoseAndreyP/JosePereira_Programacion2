#include "escritorBinario.h"
#include "./excepciones/excepcionNoSePuedeAbrirArchivo.h"
#include <sstream>

using namespace std;

EscritorBinario::EscritorBinario(string nombre) {

    archivoSalida.open(nombre, ios::out|ios::binary);

    if (!archivoSalida.is_open())
    {
        throw new ExcepcionNoSePuedeAbrirArchivo();
    }
}
istream& EscritorBinario::cargarPersonas(istream& i){
    ifstream archivoEntrada;
    archivoEntrada.open("personas.txt", ios::in);

    if (!archivoEntrada.is_open())
    {
        throw new ExcepcionNoSePuedeAbrirArchivo();
    }
   string linea {""};
    int id {0};
    string nombre {0};
    string apellido {0};
    string correo {0};

    istringstream stream(linea); 

    while (getline(i, linea)) {
        stream >> id >> nombre>> apellido>> correo;
        Persona personaNueva {id, nombre, apellido, correo};
        listaPersonas.push_back(personaNueva);
    }

}
void EscritorBinario::EscribirTexto() {
    for (Persona persona : listaPersonas){
        this->AgregarPersona(persona);
    }
}
void EscritorBinario::AgregarPersona(Persona &Persona) {
    archivoSalida.write((char *) &Persona, sizeof(Persona));
}

void EscritorBinario::Cerrar() {
    archivoSalida.close();
}
