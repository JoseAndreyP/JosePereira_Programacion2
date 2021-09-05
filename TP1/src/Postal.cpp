#include"Postal.h"

Postal::Postal(double peso, int clase, int distancia){
    this->distancia=distancia;
    this->peso=peso;
    this->clase=clase; //Se limitara la clase en el main para que solo pueda ser 1,2 o 3
}

double Postal::enviar(){
    int tipoPeso;
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

                case 2:
                case 3:
    }
        case 2:
            switch(tipoPeso){
                case 1:
            
                case 2:
                case 3:
            }
        case 3:
            switch(tipoPeso){
                case 1:
            
                case 2:
                case 3:

    }
    
}