#include <iostream>
#include <fstream>
#include "lectorBinario.h"
#include <iostream>

using namespace std;

int main() {

    LectorBinario lector("personas.dat");

    lector.buscarPersona("Angela");

    lector.buscarPersona(22);
    
    return 0;

}
