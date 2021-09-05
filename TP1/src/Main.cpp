#include<iostream>
#include "Fedex.h"
#include "Postal.h"
#include "Envio.h"

int main(){
    double costoTotal;
    int continuar=1;
    std::vector<Envio> lista;

    while(continuar==1){
        std::cout<<"Digite el tipo de envio que desea"<<std::endl<<"1.ServicioPostal"<<std::endl<<"2.Fedex"<<std::endl;
        std::cin>>tipo;
        if((tipo!=1)&&(tipo!=2)){
            std::cout<<"Indefinido"<<std::endl;
        }else{
            switch(tipo){
                case 1:
                    double peso;
                    int distancia;
                    int clase=4;
                    while((clase<1)||(clase>3)){
                        std::cout<<"Digite el tipo de clase que desea"<<std::endl<<"1.Primera"<<std::endl<<"2.Segunda"<<std::endl<<"3.Tercera"<<std::endl;
                        std::cin>>clase;
                        if((clase<1)||(clase>3)){
                            std::cout<<"Indefinido"<<std::endl;
                        }
                    }
                    std::cout<<"Digite la distancia"<<std::endl;
                    std::cin>>distancia;
                    std::cout<<"Digite el peso del objeto"<<std::endl;
                    std::cin>>peso;
                    Postal elemento=Postal(peso,clase,distancia);
                    delete clase;
                    delete peso;
                    delete distancia;
                
                case 2:
                    double peso;
                    int distancia;

                    delete peso;
                    delete distancia;
            }
            delete tipo;
        }
        std::cout<<"¿Desea seguir agregando?"<<std::endl<<"1.Si"<<std::endl<<"2.No"<<std::endl;
        std::cin>>continuar;
    }
    delete continuar;
    for (Envio* envio : arregloEnvios)
    {
    costoTotal += envio->CalculoEnvio();
    }
    std::cout << "El monto total de los envíos es de " << costoTotal << std::endl
    delete[] arregloEnvios;
    delete costoTotal;
    return 0;
}