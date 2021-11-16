#include "lectorBinario.h"
#include "./excepciones/excepcionNoSePuedeAbrirArchivo.h"
#include "./excepciones/excepcionPersonaNoExiste.h"


using namespace std;

//Metodo constructor de Lector Binario, recibe de parametro el nombre del archivo que debe leer

LectorBinario::LectorBinario(string nombreArchivo) {

    archivoEntrada.open(nombreArchivo, ios::in|ios::binary);

    if (!archivoEntrada.is_open())
    {
        throw new ExcepcionNoSePuedeAbrirArchivo();
    }
}

//Metodo de busqueda no lineal, recibe un istream de entrada y un nombre que es la persona a buscar por nombre.

string LectorBinario::buscarPersona(string nombreBuscar){

   string linea {""};
   string nombreEncontrado{0};
   int limiteBytes=84*15;
   int punteroLectura=4;
    while ((nombreBuscar!=nombreEncontrado)||(punteroLectura<85*15)){
        archivoEntrada.seekg(punteroLectura);
        char nombreLeido[15];
        archivoEntrada.read(nombreLeido, 15);
        nombreLeido[15]=0;
        nombreEncontrado=nombreLeido;
        punteroLectura+=85;//itera usando el tamano de bytes de la clase persona
    }
    if(nombreBuscar!=nombreEncontrado){
        Persona personaBuscada();
        archivoEntrada.seekg(punteroLectura-89);//-89 porque el while suma por defecto 85 y debe devolverse 4 para copiar la id
        archivoEntrada.read((char*)&personaBuscada,sizeof(Persona));
    }else{
        throw new ExcepcionPersonaNoExiste();
    }


    return "los pollitos";
}

//Metodo de busqueda no lineal, recibe un istream de entrada y una id que es la persona a buscar por identificacion.

string LectorBinario::buscarPersona(int id){

    if (!archivoEntrada.is_open())
    {
        throw new ExcepcionNoSePuedeAbrirArchivo();
    }
   string linea {""};
    int id {0};
    string nombre {0};
    string apellido {0};
    string correo {0};

    istringstream stream(linea); 

    return "los pollitos";
}

void LectorBinario::Cerrar() {
    archivoEntrada.close();
}
