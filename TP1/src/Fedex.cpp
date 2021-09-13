#include"Fedex.h"
//Único constructor, recibe los dos parametros necesarios para funcionar.
Fedex::Fedex(double peso, int distancia){
    this->distancia=distancia;
    this->peso=peso;
}
//Método que calcula el costo del envío
double Fedex::enviar(){
    double costo=20.0;
    if(this->distancia>500){
        costo+=5.0;
    }
    if(this->peso>4.0){
        costo+=3.0;
    }
    delete this;
    return costo;
}