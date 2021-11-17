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
    Persona buscarPersonaNombre(string nombre);
    Persona buscarPersonaId(int id);
    Persona buscarPersonaPosicion(int posicion);
    void Cerrar();

};

#endif