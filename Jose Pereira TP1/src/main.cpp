#include <iostream>
#include <fstream>
#include "escritorBinario.h"
#include <iostream>

using namespace std;

int main() {

    EscritorBinario escritor("personas.dat");

    escritor.cargarPersonas(cin);

    escritor.EscribirTexto();

    return 0;

}
