#ifndef _PostalJose_
#define _PostalJose_
#include "Envio.h"

class Postal: public Envio{
    private:
        int distancia;
        int clase;
        double peso;
    public:
        Postal(double, int, int);
        virtual double enviar();
        void setDistancia(int);
        void setClase(int);
        void setPeso(double);
        int getDistancia();
        int getClase();
        double getPeso();
};
#endif