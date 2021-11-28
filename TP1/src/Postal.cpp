#include"Postal.h"

//Creador con parametros del objeto postal.
Postal::Postal(double peso, int clase, int distancia){
    this->distancia=distancia;
    this->peso=peso;
    this->clase=clase; //Se limitara la clase en el main para que solo pueda ser 1,2 o 3
}
//Metodo que calcula el costo del envio de acuerdo a varios casos de parametros.
double Postal::calcularCosto(){
    int tipoPeso;
    double costo;
    if(peso>9){
        tipoPeso=1;
    }
    else if(peso>=4){
        tipoPeso=2;
    }
    else if(peso<4){
        tipoPeso=3;
    }


    switch(clase){
        case 1:
            switch(tipoPeso){
                case 1:
                    costo=distancia*0.5;
                    break;
                case 2:
                    costo=distancia*0.450;
                    break;
                case 3:
                    costo=distancia*0.195;
                    break;
            }
        break;    
        case 2:
            switch(tipoPeso){
                case 1:
                    costo=distancia*0.05;
                    break;
                case 2:
                    costo=distancia*0.0450;
                    break;
                case 3:
                    costo=distancia*0.0195;
                    break;
            }
        break;
        case 3:
            switch(tipoPeso){
                case 1:
                    costo=distancia*0.0170;
                    break;
                case 2:
                    costo=distancia*0.0160;
                    break;
                case 3:
                    costo=distancia*0.0150;
                    break;
            }
        break;
    }   
    return costo;
}