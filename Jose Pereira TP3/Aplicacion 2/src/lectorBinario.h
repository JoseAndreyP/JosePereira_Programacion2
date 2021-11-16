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
    string buscarPersona(string nombre);
    string buscarPersona(int id);
    void Cerrar();

};

#endif