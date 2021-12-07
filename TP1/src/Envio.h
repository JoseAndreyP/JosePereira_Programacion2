#ifndef _ENVIO_JOSE_
#define _ENVIO_JOSE_
// Es una clase Abstracta
class Envio {
    protected:
        int distancia;
        double peso;
        Envio() {}
    public:
        virtual double calcularCosto()=0; // Metodo virtual puro
};

#endif
