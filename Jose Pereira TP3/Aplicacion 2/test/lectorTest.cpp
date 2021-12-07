#include <gtest/gtest.h>
#include <string>

#include "../src/persona.h"
#include "../src/lectorBinario.h"
#include "../src/excepciones/excepcionPersonaNoExiste.h"
#include "../src/excepciones/excepcionArchivoNoEncontrado.h"
#include "./excepciones/excepcionErrorLeyendoPersona.h"
#include <fstream>
using namespace std;

namespace {

    //Test de buscar la persona por posicion
    TEST(LectorTest, Prueba_BuscarPersonaPorPosicion) {
        
        Persona PersonaDePrueba ( 15, "Jose", "Pereira","joanPe@gmail.com" );

        LectorBinario lector ("prueba.dat");

        Persona PersonaLeida= lector.buscarPersonaPosicion(1);
       
        EXPECT_EQ(PersonaLeida.ObtenerInformacion(), PersonaDePrueba.ObtenerInformacion());
    }
      //Test de buscar la persona por id
    TEST(LectorTest, Prueba_BuscarPersonaPorId) {
        
        Persona PersonaDePrueba ( 15, "Jose", "Pereira","joanPe@gmail.com" );

        LectorBinario lector ("prueba.dat");

        Persona PersonaLeida= lector.buscarPersonaId(15);
       
        
        EXPECT_EQ(PersonaLeida.ObtenerInformacion(), PersonaDePrueba.ObtenerInformacion());
    }
      //Test de buscar la persona por nombre
    TEST(LectorTest, Prueba_BuscarPersonaPorNombre) {
        
        Persona PersonaDePrueba ( 15, "Jose", "Pereira","joanPe@gmail.com" );

        LectorBinario lector ("prueba.dat");

        Persona PersonaLeida= lector.buscarPersonaNombre("Jose");
       
        
        EXPECT_EQ(PersonaLeida.ObtenerInformacion(), PersonaDePrueba.ObtenerInformacion());
    }
    
      //Test de buscar la persona por apellido
	TEST(LectorTest, Prueba_BuscarPersonaPorApellido) {
        
        Persona PersonaDePrueba ( 15, "Jose", "Pereira","joanPe@gmail.com" );

        LectorBinario lector ("prueba.dat");

        Persona PersonaLeida= lector.buscarPersonaApellido("Pereira");
       
        
        EXPECT_EQ(PersonaLeida.ObtenerInformacion(), PersonaDePrueba.ObtenerInformacion());
    }
      //Test de excepcion para archivo no encontrado
    TEST(LectorTest, Prueba_ExcepcionArchivoNoEncontrado) {

        Persona PersonaDePrueba { 15, "Jose", "Pereira","joanPe@gmail.com" };

        EXPECT_THROW({

            LectorBinario lector {"pruebaImaginaria.dat"};
            lector.Cerrar();

        }, ExcepcionArchivoNoEncontrado);

    }
    //Test de excepcion para error de lectura
    TEST(LectorTest, Prueba_ExcepcionErrorLeyendoPersona) {

        Persona PersonaDePrueba { 15, "Jose", "Pereira","joanPe@gmail.com" };

        EXPECT_THROW({

            LectorBinario lector {"pruebaErronea.dat"};
            Persona PersonaLeida= lector.buscarPersonaNombre("Desconocido");
            lector.Cerrar();

        }, ExcepcionErrorLeyendoPersona);

    }

    //Test de excepcion para busqueda de persona no existente

    TEST(LectorTest, Prueba_ExcepcionPersonaNoExiste) {

        Persona PersonaDePrueba { 15, "Jose", "Pereira","joanPe@gmail.com" };

        EXPECT_THROW({

            LectorBinario lector {"prueba.dat"};
            Persona PersonaLeida= lector.buscarPersonaNombre("Desconocido");
            lector.Cerrar();

        }, ExcepcionArchivoNoEncontrado);

    }

}
