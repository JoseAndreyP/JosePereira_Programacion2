#include"Fedex.h"

Fedex::Fedex(double peso, int distancia){
    this->distancia=distancia;
    this->peso=peso;
}

double Fedex::enviar(){
    double costo=20.0;
    if(this->distancia>500){
        costo+=5.0;
    }
    if(this->peso>4.0){
        costo+=3.0;
    }
    return costo;
}