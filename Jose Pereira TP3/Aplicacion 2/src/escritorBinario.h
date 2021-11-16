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
    istream& cargarPersonas(istream&);
    void EscribirTexto();
    void AgregarPersona(Persona &Persona);
    void Cerrar();

};

#endif