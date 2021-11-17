#include <iostream>
#include <fstream>
#include "lectorBinario.h"
#include <iostream>

using namespace std;

int main() {

    LectorBinario lector("personas.dat");

    Persona personabuscada= lector.buscarPersonaPosicion(1);
    
    return 0;

}
