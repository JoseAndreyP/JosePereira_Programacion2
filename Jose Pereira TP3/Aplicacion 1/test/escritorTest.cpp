#include <gtest/gtest.h>
#include <string>

#include "../src/persona.h"
#include "../src/escritorBinario.h"
#include "../src/excepciones/excepcionArchivoNoEncontrado.h"
#include <fstream>
using namespace std;

namespace {
    TEST(EscritorTest, Prueba_EscribirTexto) {
        
        Persona PersonaDePrueba ( 15, "Jose", "Pereira","joanPe@gmail.com" );

        EscritorBinario escritor {"prueba.dat"};
        escritor.AgregarPersona(PersonaDePrueba);
        escritor.Cerrar();

       
        ifstream archivoEntradaPrueba;
        archivoEntradaPrueba.open("prueba.dat", ios::in|ios::binary);
        Persona PersonaLeida;

        archivoEntradaPrueba.seekg(0, ios::end);
        archivoEntradaPrueba.read((char *) &PersonaLeida, sizeof(Persona));
        
        EXPECT_EQ(PersonaLeida.ObtenerInformacion(), PersonaDePrueba.ObtenerInformacion());
    }

    TEST(EscritorTest, Prueba_CargarPersonas) {
        Persona PersonaDePrueba { 15, "Jose", "Pereira","joanPe@gmail.com" };
        EscritorBinario escritor {"prueba.dat"};
        escritor.cargarPersonas("pruebaTexto.txt");
        escritor.Cerrar();

        EXPECT_EQ(escritor.obtenerPersona(0).ObtenerInformacion(), PersonaDePrueba.ObtenerInformacion());
        
    }

    TEST(EscritorTest, Prueba_ExcepcionArchivoNoEncontrado) {

        Persona PersonaDePrueba { 15, "Jose", "Pereira","joanPe@gmail.com" };

        EXPECT_THROW({

            EscritorBinario escritor {"prueba.dat"};
            escritor.cargarPersonas( "pruebaTextoImaginaria.txt");
            escritor.Cerrar();

        }, ExcepcionArchivoNoEncontrado);

    }

}