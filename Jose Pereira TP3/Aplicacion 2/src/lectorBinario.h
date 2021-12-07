#ifndef LectorBinario_H
#define LectorBinario_H

#include <string>
#include <fstream>
#include <iostream>
#include "persona.h"
#include <sstream>

class LectorBinario {

    ifstream archivoEntrada;

    public:
    LectorBinario(std::string nombre);
    Persona buscarPersonaPosicion(int posicion);
    Persona buscarPersonaNombre(string nombre);
    Persona buscarPersonaApellido(string apellido);
    Persona buscarPersonaId(int id);

    void Cerrar();

};

#endif
