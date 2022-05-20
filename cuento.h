#ifndef CUENTO_H_INCLUDED
#define CUENTO_H_INCLUDED

#include "lectura.h"
 
class Cuento : public Lectura{
private:
    std::string libro;
public:
    Cuento(char tipo_lectura, std::string titulo, int minutos, int anio_publicacion, int referencia, std::string libro);
    ~Cuento(){};
    void mostrar();
};

#endif