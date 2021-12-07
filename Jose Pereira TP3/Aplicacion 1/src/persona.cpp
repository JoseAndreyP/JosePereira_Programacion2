#include "persona.h"
#include <string>
#include <cstring>

using namespace std;
//Metodo constrctor por parametros, recibe cada atributo de la clase Persona y la crea con esa información
Persona::Persona(int id, string nombre, string apellido, string correo) {
    this->id = id;

    strcpy(this->nombre, nombre.c_str());
    strcpy(this->apellido, apellido.c_str());
    strcpy(this->correo, correo.c_str());
}

//Metodo constrctor sin parametros, crea cada atributo como vacio y dependiente de una colocación de argumentos  
Persona::Persona() {
    this->id = 0;    
    strcpy(this->nombre, "");
    strcpy(this->apellido, "");
    strcpy(this->correo, "");

}
//Destructor
Persona::~Persona() {
    
}

//Metodo ObtenerInformacion, retorna un texto string con los datos en formato "id nombre apellido correo"

string Persona::ObtenerInformacion(){
    string informacion= (char)id +" "+ (string)nombre +" "+ (string)apellido + " "+(string)correo;
    return informacion;
}