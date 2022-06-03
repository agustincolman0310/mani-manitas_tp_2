#ifndef CONSTANTES_H_INCLUDED
#define CONSTANTES_H_INCLUDED
#include<string>
const char NOVELA = 'N';
const char CUENTO = 'C';
const char POEMA = 'P';
const int ANIO_DESCONOCIDO = -1;
const std::string NACIONALIDAD_DESCONOCIDA = "¿?";
#define CARA_PENSATIVA "\U0001f914"
//const char HISTORICA = 'H';
const std::string RUTA_ARCHIVO_ESCRITORES = "escritores.txt";
const std::string RUTA_ARCHIVO_LECTURAS = "lectura.txt";

enum Generos{
    DRAMA = 1,
    COMEDIA,
    FICCION,
    SUSPENSO,
    TERROR,
    ROMANTICA, 
    HISTORICA,
};

enum Opciones{
    OPCION_1 = 1,
    OPCION_2,
    OPCION_3,
    OPCION_4,
    OPCION_5,
    OPCION_6,
    OPCION_7,
    OPCION_8,
    OPCION_9,
    OPCION_10,
    OPCION_11,
    OPCION_12,
};

#endif