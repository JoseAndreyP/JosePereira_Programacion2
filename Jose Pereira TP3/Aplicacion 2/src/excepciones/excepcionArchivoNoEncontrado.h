#ifndef ExcepcionArchivoNoEncontrado_h
#define ExcepcionArchivoNoEncontrado_H

#include <exception>

class ExcepcionArchivoNoEncontrado : public std::exception
{
    public:
    ExcepcionArchivoNoEncontrado() noexcept = default;
    ~ExcepcionArchivoNoEncontrado() = default;

    virtual const char* what() const noexcept {
        return "No se encuentra el archivo";
    }

};

#endif