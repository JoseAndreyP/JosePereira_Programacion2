#ifndef _FeDexJose_
#define _FeDexJose_
#include "Envio.h"

class Fedex: public Envio{
    private:
        int distancia;
        int clase;
        double peso;
    public:
        Fedex(double, int, int);
        virtual double enviar();
        void setDistancia(int);
        void setClase(int);
        void setPeso(double);
        int getDistancia();
        int getClase();
        double getPeso();
};
#endif