#ifndef _FedexJose_
#define _FedexJose_
#include "Envio.h"
//Clase del servicio de envio Fedex
class Fedex: public Envio{
    private:
    public:
        Fedex(double, int);
        virtual double calcularCosto();
};
#endif
