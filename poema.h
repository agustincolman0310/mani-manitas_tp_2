#ifndef POEMA_H_INCLUDED
#define POEMA_H_INCLUDED
#include "lectura.h"

class Poema : public Lectura{
private:
    int cant_versos;
public:
    Poema(char tipo_lectura, std::string titulo,int minutos, int anio_publicacion, int referencia, int cant_versos);
    ~Poema(){};
    void mostrar();
};

#endif