#include "lectorBinario.h"
#include "./excepciones/excepcionArchivoNoEncontrado.h"
#include "./excepciones/excepcionPersonaNoExiste.h"


using namespace std;

//Metodo constructor de Lector Binario, recibe de parametro el nombre del archivo que debe leer

LectorBinario::LectorBinario(string nombreArchivo) {

    archivoEntrada.open(nombreArchivo, ios::in|ios::binary);

    if (!archivoEntrada.is_open())
    {
        throw new ExcepcionArchivoNoEncontrado();
    }
}

//Metodo de busqueda no lineal, recibe un istream de entrada y un nombre que es la persona a buscar por nombre.

Persona LectorBinario::buscarPersonaNombre(string nombreBuscar){

   string linea {""};
   string nombreEncontrado{0};
   int limiteBytes=archivoEntrada.tellg();
   int punteroLectura=4;
    while ((nombreBuscar!=nombreEncontrado)||(punteroLectura<limiteBytes)){
        archivoEntrada.seekg(punteroLectura);
        char nombreLeido[15];
        archivoEntrada.read(nombreLeido, 15);
        nombreEncontrado=nombreLeido;
        punteroLectura+=84;//itera usando el tamano de bytes de la clase persona(Posible error con punteroLectura)
    }
        Persona personaBuscada();
    if(nombreBuscar==nombreEncontrado){
        punteroLectura-4;//resto 4 para ubicarse a la id
        archivoEntrada.seekg(punteroLectura-sizeof(Persona));
        archivoEntrada.read((char*)&personaBuscada,sizeof(Persona));//-sizeof(Persona) porque el while suma por defecto esa cantidad
    }else{
        throw new ExcepcionPersonaNoExiste();
    }
    return personaBuscada();
}

//Metodo de busqueda no lineal, recibe un istream de entrada y una id que es la persona a buscar por identificacion.

Persona LectorBinario::buscarPersonaId(int id){
 string linea {""};
   int idEncontrada{0};
   int limiteBytes=archivoEntrada.tellg();
   int punteroLectura=0;
    while ((id!=idEncontrada)||(punteroLectura<limiteBytes)){
        archivoEntrada.seekg(punteroLectura);
        char idLeida[4];
        archivoEntrada.read(idLeida, 4);
        idEncontrada=(int)idLeida;//Conversion de tipo char a int mediante casting
        punteroLectura+=sizeof(Persona);//itera usando el tamano de bytes de la clase persona
    }
        Persona personaBuscada();
    if(idEncontrada==id){
        archivoEntrada.seekg(punteroLectura-sizeof(Persona));
        archivoEntrada.read((char*)&personaBuscada,sizeof(Persona));
    }else{
        throw new ExcepcionPersonaNoExiste();
    }
    return personaBuscada();
}
//Metodo de busqueda por posicion no lineal, recibe un istream de entrada y una id que es la persona a buscar por identificacion.

Persona LectorBinario::buscarPersonaPosicion(int posicionBuscada){
    if(posicionBuscada==0){
        throw new ExcepcionPersonaNoExiste();
    }
    string linea {""};
    int posicionEncontrada=1;
    int limiteBytes=archivoEntrada.tellg();;
    int punteroLectura=0;
    while ((posicionBuscada!=posicionEncontrada)||(punteroLectura<limiteBytes)){
        punteroLectura+=sizeof(Persona);//itera usando el tamano de bytes de la clase persona
        ++posicionEncontrada;
    }
    if(punteroLectura>limiteBytes){
        throw new ExcepcionPersonaNoExiste();
    }
    Persona personaBuscada();
    archivoEntrada.seekg(punteroLectura-sizeof(Persona));//-sizeof(Persona) porque el while suma por defecto esa cantidad
    archivoEntrada.read((char*)&personaBuscada,sizeof(Persona));
    
    return personaBuscada();
}

void LectorBinario::Cerrar() {
    archivoEntrada.close();
}
