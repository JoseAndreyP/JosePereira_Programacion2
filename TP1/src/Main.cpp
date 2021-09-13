#include<iostream>
#include <vector>
#include "Fedex.h"
#include "Postal.h"
#include "Envio.h"

int main(){
    double costoTotal;
    int continuar=1;
    int tipo=3;
    double peso;
    int distancia;
    int clase=4;
    std::vector<Envio *> arregloEnvios;

    while(continuar==1){
        while((tipo!=1)&&(tipo!=2)){
            std::cout<<"Digite el tipo de envio que desea"<<std::endl<<"1.ServicioPostal"<<std::endl<<"2.Fedex"<<std::endl;
            std::cin>>tipo;
            if((tipo!=1)&&(tipo!=2)){
                std::cout<<"Digite 1 o 2 para definir su tipo de envio"<<std::endl;
            }
        }
        //Switch que define por casos el tipo de envio que se quiere.
        switch(tipo){
            case 1:{
                while((clase<1)||(clase>3)){
                    std::cout<<"Digite el tipo de clase que desea"<<std::endl<<"1.Primera"<<std::endl<<"2.Segunda"<<std::endl<<"3.Tercera"<<std::endl;
                    std::cin>>clase;
                    if(std::cin.fail()){
                        std::cout<<"Indefinido"<<std::endl;
                    }
                }
                std::cout<<"Digite la distancia en Kilometros"<<std::endl;
                std::cin>>distancia;
                std::cout<<"Digite el peso del objeto en Kilogramos"<<std::endl;
                std::cin>>peso;
                Postal* elemento=new Postal(peso,clase,distancia);
                arregloEnvios.push_back(elemento);                
            }break;
            case 2:{
                std::cout<<"Digite la distancia en Kilometros"<<std::endl;
                std::cin>>distancia;
                std::cout<<"Digite el peso del objeto en Kilogramos"<<std::endl;
                std::cin>>peso;
                Fedex* elemento=new Fedex(peso,distancia);
                arregloEnvios.push_back(elemento);
            }break;
            default:{
                std::cout<<"Comando no reconocido"<<std::endl;
            }break;
        }
        std::cout<<"¿Desea seguir agregando?"<<std::endl<<"1.Si"<<std::endl<<"2.No"<<std::endl;
        std::cin>>continuar;
    }
    //Lineas sacadas del enunciado de la tarea
    for (Envio* envio : arregloEnvios){
        costoTotal += envio->enviar();
    }
    std::cout << "El monto total de los envíos es de " << costoTotal << std::endl;

    //Destructor de todos los objetos Envio* que se crearon 
    for (Envio* envio : arregloEnvios){
        delete envio;
    }
    return 0;
}