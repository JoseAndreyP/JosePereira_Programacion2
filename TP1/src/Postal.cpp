#include"Postal.h"

Postal::Postal(double peso, int clase, int distancia){
    this->distancia=distancia;
    this->peso=peso;
    this->clase=clase; //Se limitara la clase en el main para que solo pueda ser 1,2 o 3
}

double Postal::enviar(){
    int tipoPeso;
    double costo;
    if(peso<4){
        tipoPeso=1;
    }
    else if(peso<9){
        tipoPeso=2;
    }
    else{
        tipoPeso=3;
    }
    switch(clase){
        case 1:
            switch(tipoPeso){
                case 1:
                    costo=distancia*0.195;
                case 2:
                    costo=distancia*0.450;
                case 3:
                    costo=distancia*0.500;
    }
        case 2:
            switch(tipoPeso){
                case 1:
                    costo=distancia*0.0195;
                case 2:
                    costo=distancia*0.0450;
                case 3:
                    costo=distancia*0.05;
            }
        case 3:
            switch(tipoPeso){
                case 1:
                    costo=distancia*0.0150;
                case 2:
                    costo=distancia*0.0160;
                case 3:
                    costo=distancia*0.0170;
    }
    return costo;
}