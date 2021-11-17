#include "escritorBinario.h"
#include "./excepciones/excepcionArchivoNoEncontrado.h"
#include <sstream>

using namespace std;
/*
Constructor, recibe una string que es el nombre del archivo a crear

*/
EscritorBinario::EscritorBinario(string nombre) {

    archivoSalida.open(nombre, ios::out|ios::binary);

    if (!archivoSalida.is_open())
    {
        throw new ExcepcionArchivoNoEncontrado();
    }
}
/*
cargarPersonas: recibe una string que es el nombre del archivo a buscar leer y un istream encargado de
recibir un flujo de datos. Despues agrega a la listaPersonas los datos correspondientes.
*/
istream& EscritorBinario::cargarPersonas(istream& i,string nombreArchivo){
    ifstream archivoEntrada;
    archivoEntrada.open(nombreArchivo, ios::in);

    if (!archivoEntrada.is_open())
    {
        throw new ExcepcionArchivoNoEncontrado();
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
    return i;
}

/* EscribirTexto: Agrega todos los elementos de ListaPersonas al archivo Binario .dat */
void EscritorBinario::EscribirTexto() {
    for (Persona persona : listaPersonas){
        this->AgregarPersona(persona);
    }
}
/* AgregarPersona: Agrega una Persona al archivo Binario .dat */
void EscritorBinario::AgregarPersona(Persona &Persona) {
    archivoSalida.write((char *) &Persona, sizeof(Persona));
}
Persona EscritorBinario::obtenerPersona(int posicion){

    return listaPersonas[posicion];
}

/* Cerrar: Cierra el archivo */

void EscritorBinario::Cerrar() {
    archivoSalida.close();
}

