
#include "./excepciones/excepcionArchivoNoEncontrado.h"

#include "escritorBinario.h"
#include <sstream>

using namespace std;
/*
Constructor, recibe una string que es el nombre del archivo a crear

*/
EscritorBinario::EscritorBinario(string nombre) {

    archivoSalida.open(nombre, ios::out|ios::binary);

    if (!archivoSalida.is_open())
    {
        throw ExcepcionArchivoNoEncontrado();
    }
}
/*
cargarPersonas: recibe una string que es el nombre del archivo a buscar leer y un istream encargado de
recibir un flujo de datos. Despues agrega a la listaPersonas los datos correspondientes.
*/
void EscritorBinario::cargarPersonas(string nombreArchivo){
    ifstream archivoEntrada;
    archivoEntrada.open(nombreArchivo, ifstream::in);

    if (!archivoEntrada.is_open())
    {
        throw ExcepcionArchivoNoEncontrado();
    }
    int id {0};
    string nombre {0};
    string apellido {0};
    string correo {0};

    while (archivoEntrada >> id >> nombre>> apellido>> correo) {
        
        Persona personaNueva {id, nombre, apellido, correo};
        listaPersonas.push_back(personaNueva);
    }
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
/*ObtenerPersona: Obtiene una Persona de la lista */
Persona EscritorBinario::obtenerPersona(int posicion){

    return listaPersonas[posicion];
}

/* Cerrar: Cierra el archivo */

void EscritorBinario::Cerrar() {
    archivoSalida.close();
}

