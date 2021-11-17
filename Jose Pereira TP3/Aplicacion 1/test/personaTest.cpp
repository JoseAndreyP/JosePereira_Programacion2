#include <gtest/gtest.h>
#include <string>
#include "../src/persona.h"
#include <fstream>
using namespace std;

namespace {
    TEST(PersonaTest, Prueba_ObtenerInformacion) {
        
        Persona PersonaDePrueba { 15, "Jose", "Pereira","joanPe@gmail.com" };
        
        EXPECT_EQ(PersonaDePrueba.ObtenerInformacion(), "15 Jose Pereira joanPe@gmail.com");
    }
}