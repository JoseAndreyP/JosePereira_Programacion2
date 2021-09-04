#ifndef _PostalJose_
#define _PostalJose_
#include "Envio.h"

class Postal: public Envio{
    private:
        int distancia;
        double peso;
    public:
        Postal(double, int);
        virtual double enviar();
        void setDistancia(int);
        void setPeso(double);
        int getDistancia();
        double getPeso();
};
#endif