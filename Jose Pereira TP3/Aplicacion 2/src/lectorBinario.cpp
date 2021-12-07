#include "lectorBinario.h"
#include "./excepciones/excepcionArchivoNoEncontrado.h"
#include "./excepciones/excepcionPersonaNoExiste.h"


using namespace std;

//Metodo constructor de Lector Binario, recibe de parametro el nombre del archivo que debe leer

LectorBinario::LectorBinario(string nombreArchivo) {

    archivoEntrada.open(nombreArchivo, ios::in|ios::binary);

    if (!archivoEntrada.is_open())
    {
        throw ExcepcionArchivoNoEncontrado();
    }
}

//Metodo de busqueda no lineal, recibe un nombre que es la persona a buscar por nombre.

Persona LectorBinario::buscarPersonaNombre(string nombreBuscar){
    int id;
    char nombre[15];
    char apellido[15];
    char correo[50];
    archivoEntrada.seekg(0, ios::end);
    string linea {""};
    long limiteBytes=archivoEntrada.tellg();
    long punteroLectura=0;
      archivoEntrada.seekg(punteroLectura);
      archivoEntrada.read((char*)&id,sizeof(id));
      archivoEntrada.read((char*)&nombre,sizeof(nombre));
      archivoEntrada.read((char*)&apellido,sizeof(apellido));
      archivoEntrada.read((char*)&correo,sizeof(correo));
      punteroLectura+=84;
    if(nombre==0){
    	throw ExcepcionErrorLeyendoPersona();
    }
    while ((nombre!=nombreBuscar)&&(punteroLectura<limiteBytes)){
      archivoEntrada.seekg(punteroLectura);
      archivoEntrada.read((char*)&id,sizeof(id));
      archivoEntrada.read((char*)&nombre,sizeof(nombre));
      archivoEntrada.read((char*)&apellido,sizeof(apellido));
      archivoEntrada.read((char*)&correo,sizeof(correo));
      punteroLectura+=84;//itera usando el tamano de bytes de la clase persona
    }    
	if((nombre!=nombreBuscar)&&(punteroLectura>=limiteBytes)){
    	throw ExcepcionPersonaNoExiste();
    }

    Persona *personaBuscada=new Persona(id,nombre,apellido,correo);
    return *personaBuscada;
}
//Metodo de busqueda no lineal, recibe un apellido que es la persona a buscar por apellido.

Persona LectorBinario::buscarPersonaApellido(string apellidoBuscar){
    int id;
    char nombre[15];
    char apellido[15];
    char correo[50];
    archivoEntrada.seekg(0, ios::end);
    string linea {""};
    long limiteBytes=archivoEntrada.tellg();
    long punteroLectura=0;
      archivoEntrada.seekg(punteroLectura);
      archivoEntrada.read((char*)&id,sizeof(id));
      archivoEntrada.read((char*)&nombre,sizeof(nombre));
      archivoEntrada.read((char*)&apellido,sizeof(apellido));
      archivoEntrada.read((char*)&correo,sizeof(correo));
      punteroLectura+=84;
      
	if(apellido==0){
    	throw ExcepcionErrorLeyendoPersona();
    }
    while ((apellido!=apellidoBuscar)&&(punteroLectura<limiteBytes)){
      archivoEntrada.seekg(punteroLectura);
      archivoEntrada.read((char*)&id,sizeof(id));
      archivoEntrada.read((char*)&nombre,sizeof(nombre));
      archivoEntrada.read((char*)&apellido,sizeof(apellido));
      archivoEntrada.read((char*)&correo,sizeof(correo));
      punteroLectura+=84;//itera usando el tamano de bytes de la clase persona
    }
    if((apellidoBuscar!=apellido)&&(punteroLectura>=limiteBytes)){
    	throw ExcepcionPersonaNoExiste();
    }

    Persona *personaBuscada=new Persona(id,nombre,apellido,correo);
    return *personaBuscada;
}

//Metodo de busqueda no lineal, recibe un istream de entrada y una id que es la persona a buscar por identificacion.

Persona LectorBinario::buscarPersonaId(int idBuscada){

    int id;
    char nombre[15];
    char apellido[15];
    char correo[50];
    archivoEntrada.seekg(0, ios::end);
    string linea {""};
    long limiteBytes=archivoEntrada.tellg();
    long punteroLectura=0;

      archivoEntrada.seekg(punteroLectura);
      archivoEntrada.read((char*)&id,sizeof(id));
      archivoEntrada.read((char*)&nombre,sizeof(nombre));
      archivoEntrada.read((char*)&apellido,sizeof(apellido));
      archivoEntrada.read((char*)&correo,sizeof(correo));
      punteroLectura+=84;
    if(id==0){
    	throw ExcepcionErrorLeyendoPersona();
    }
    while ((idBuscada!=id)&&(punteroLectura<limiteBytes)){
      archivoEntrada.seekg(punteroLectura);
      archivoEntrada.read((char*)&id,sizeof(id));
      archivoEntrada.read((char*)&nombre,sizeof(nombre));
      archivoEntrada.read((char*)&apellido,sizeof(apellido));
      archivoEntrada.read((char*)&correo,sizeof(correo));
      punteroLectura+=84;//itera usando el tamano de bytes de la clase persona
    }
    if((idBuscada!=id)&&(punteroLectura>=limiteBytes)){
    	throw ExcepcionPersonaNoExiste();
    }
     
    

    Persona *personaBuscada=new Persona(id,nombre,apellido,correo);
    return *personaBuscada;
}
//Metodo de busqueda por posicion no lineal, recibe un istream de entrada y una id que es la persona a buscar por identificacion.

Persona LectorBinario::buscarPersonaPosicion(int posicionBuscada){
    if(posicionBuscada<=0){
      throw ExcepcionPersonaNoExiste();
    }
    int id;
    char nombre[15];
    char apellido[15];
    char correo[50];
    archivoEntrada.seekg(0, ios::end);
    string linea {""};
    long limiteBytes=archivoEntrada.tellg();
    long punteroLectura=(posicionBuscada)*sizeof(Persona);
    if(punteroLectura>limiteBytes){
    	throw ExcepcionPersonaNoExiste();
    }
    
    archivoEntrada.seekg(punteroLectura);
    archivoEntrada.read((char*)&id,sizeof(id));
    archivoEntrada.read((char*)&nombre,sizeof(nombre));
    archivoEntrada.read((char*)&apellido,sizeof(apellido));
    archivoEntrada.read((char*)&correo,sizeof(correo));
    if(id==0){
    	throw ExcepcionErrorLeyendoPersona();
    }
    
    Persona *personaBuscada=new Persona(id,nombre,apellido,correo);
    return *personaBuscada;
}

void LectorBinario::Cerrar() {
    archivoEntrada.close();
}
