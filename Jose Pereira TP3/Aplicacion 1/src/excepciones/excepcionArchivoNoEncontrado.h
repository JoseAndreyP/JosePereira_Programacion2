#ifndef ExcepcionArchivoNoEncontrado_H
#define ExcepcionArchivoNoEncontrado_H

#include <exception>

class ExcepcionArchivoNoEncontrado : public std::exception
{
    public:
    ExcepcionArchivoNoEncontrado() noexcept = default;
    ~ExcepcionArchivoNoEncontrado() = default;

    virtual const char* what() const noexcept {
        return "El archivo no se encontro";
    }

};

#endif