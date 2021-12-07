#ifndef EscritorBinario_H
#define EscritorBinario_H

#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include "persona.h"

class EscritorBinario {

    ofstream archivoSalida;
    vector<Persona> listaPersonas; 

    public:
    EscritorBinario(std::string nombre);
    void cargarPersonas(string);
    void EscribirTexto();
    void AgregarPersona(Persona &Persona);
    Persona obtenerPersona(int posicion);
    void Cerrar();

};

#endif