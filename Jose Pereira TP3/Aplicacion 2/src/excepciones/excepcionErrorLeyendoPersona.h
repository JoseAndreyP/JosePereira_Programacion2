#ifndef ExcepcionErrorLeyendoPersona_H
#define ExcepcionErrorLeyendoPersona_H

#include <exception>

class ExcepcionErrorLeyendoPersona : public std::exception
{
    public:
    ExcepcionErrorLeyendoPersona() noexcept = default;
    ~ExcepcionErrorLeyendoPersona() = default;

    virtual const char* what() const noexcept {
        return "Persona no se lee correctamente";
    }

};

#endif
