#ifndef _PostalJose_
#define _PostalJose_
#include "Envio.h"
//Clase del Servicio Postal.
class Postal: public Envio{
    private:
        int clase;
    public:
        Postal(double, int, int);
        virtual double calcularCosto();

};
#endif
