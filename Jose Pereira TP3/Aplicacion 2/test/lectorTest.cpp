#include <gtest/gtest.h>
#include <string>

#include "../src/persona.h"
#include "../src/lectorBinario.h"
#include "../src/excepciones/excepcionPersonaNoExiste.h"
#include "../src/excepciones/excepcionArchivoNoEncontrado.h"
#include <fstream>
using namespace std;

namespace {
    TEST(LectorTest, Prueba_BuscarPersonaPorPosicion) {
        
        Persona PersonaDePrueba ( 15, "Jose", "Pereira","joanPe@gmail.com" );

        LectorBinario lector ("prueba.dat");

        Persona PersonaLeida= lector.buscarPersonaPosicion(1);
       
        EXPECT_EQ(PersonaLeida.ObtenerInformacion(), PersonaDePrueba.ObtenerInformacion());
    }
    TEST(LectorTest, Prueba_BuscarPersonaPorId) {
        
        Persona PersonaDePrueba ( 15, "Jose", "Pereira","joanPe@gmail.com" );

        LectorBinario lector ("prueba.dat");

        Persona PersonaLeida= lector.buscarPersonaId(15);
       
        
        EXPECT_EQ(PersonaLeida.ObtenerInformacion(), PersonaDePrueba.ObtenerInformacion());
    }
    TEST(LectorTest, Prueba_BuscarPersonaPorNombre) {
        
        Persona PersonaDePrueba ( 15, "Jose", "Pereira","joanPe@gmail.com" );

        LectorBinario lector ("prueba.dat");

        Persona PersonaLeida= lector.buscarPersonaNombre("Jose");
       
        
        EXPECT_EQ(PersonaLeida.ObtenerInformacion(), PersonaDePrueba.ObtenerInformacion());
    }
    

    TEST(LectorTest, Prueba_ExcepcionArchivoNoEncontrado) {

        Persona PersonaDePrueba { 15, "Jose", "Pereira","joanPe@gmail.com" };

        EXPECT_THROW({

            LectorBinario lector {"pruebaImaginaria.dat"};
            lector.Cerrar();

        }, ExcepcionArchivoNoEncontrado);

    }

        TEST(LectorTest, Prueba_ExcepcionPersonaNoExiste) {

        Persona PersonaDePrueba { 15, "Jose", "Pereira","joanPe@gmail.com" };

        EXPECT_THROW({

            LectorBinario lector {"prueba.dat"};
            Persona PersonaLeida= lector.buscarPersonaNombre("Desconocido");
            lector.Cerrar();

        }, ExcepcionArchivoNoEncontrado);

    }

}