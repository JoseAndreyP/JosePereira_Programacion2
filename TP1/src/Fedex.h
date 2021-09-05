#ifndef _FedexJose_
#define _FedexJose_
#include "Envio.h"

class Fedex: public Envio{
    private:
        int distancia;
        double peso;
    public:
        Fedex(double, int);
        virtual double enviar();
        void setDistancia(int);
        void setPeso(double);
        int getDistancia();
        double getPeso();
};
#endif