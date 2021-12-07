#ifndef PERSONA_JOSE
#define PERSONA_JOSE

#include <string>
#include <cstring>
using namespace std;

class Persona
{
    int id;
    char nombre[15];
    char apellido[15];
    char correo[50];

    public:
    Persona(int id, string nombre, string apellido, string correo);
    Persona();
    ~Persona();
    string ObtenerInformacion();
};


#endif