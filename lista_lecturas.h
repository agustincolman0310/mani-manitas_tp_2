#ifndef LISTA_LECTURAS_H_INCLUDED
#define LISTA_LECTURAS_H_INCLUDED

#include "lectura.h"
#include "nodo.h"
// template <typename T>
typedef Lectura* T;


class Lista_Lecturas {
    // Atributos
private:
    Nodo<T>* primero;
    int cantidad;
    Nodo<T>* actual;
    Nodo<T>* ultimo;
    Nodo<T>* obtener_nodo(int pos);
    // Metodos
public:
    /*
    Constructor
    PRE: -
    POS: construye una Lista vacia
    */
    Lista_Lecturas();

    /*
    Baja
    PRE: 1 <= pos <= obtener_cantidad()
    POS: da de baja al elemento que esta en pos, se empieza por 1
    */
    // void baja(int pos);

    /*
    Consulta
    PRE: 1 <= pos <= obtener_cantidad()
    POS: devuelve el elemento que esta en pos, se empieza por 1
    */
    // T consulta(int pos);

    /*
    Vacia
    PRE: -
    POS: devuelve true si la Lista esta vacia, false de lo contrario
    */
    bool vacia();
    void baja(int pos);

    void mostrar_lectura(T lectura);

    int obtener_cantidad();

    void insertar_ordenadamente(T data_);
    int buscar_titulo(string titulo_buscado);
    Nodo<T>* obtener_primero();
    // Destructor
    ~Lista_Lecturas();

    
    
    void ordenar(T objeto, Nodo<T>* direccion);
};

// template <typename T>

bool Lista_Lecturas::vacia(){
    return (cantidad == 0);
}

int Lista_Lecturas::obtener_cantidad(){
    return cantidad;
}

Lista_Lecturas::Lista_Lecturas(){
    primero = nullptr;
    cantidad = 0;
    actual = nullptr;
    ultimo = nullptr;
}

Lista_Lecturas::~Lista_Lecturas(){
    while(!vacia()){
        actual = primero;
        primero = primero->obtener_siguiente();
        delete actual;
    }
}


void Lista_Lecturas::insertar_ordenadamente(T data_){
    Nodo<T> *nuevo_nodo = new Nodo<T> (data_);
    Nodo<T> *temp = primero;
    if (!primero) {
        primero = nuevo_nodo;
        cout<<"Primero insertado, año: "<<primero->obtener_dato()->obtener_anio_publicacion()<<endl;
    } 
    else {
        if (primero->obtener_dato()->obtener_anio_publicacion() > data_->obtener_anio_publicacion()) {
            nuevo_nodo->cambiar_siguiente(primero);
            cout<<"Insertado en el primer if del else, año: "<<nuevo_nodo->obtener_dato()->obtener_anio_publicacion()<<endl;
            
        } 
        else {
            while((temp->obtener_siguiente() != NULL) && (temp->obtener_siguiente()->obtener_dato()->obtener_anio_publicacion() < data_->obtener_anio_publicacion())) {
                temp = temp->obtener_siguiente();
                cout<<"Insertado en el while, año: "<<temp->obtener_dato()->obtener_anio_publicacion()<<endl;
            }
            nuevo_nodo->cambiar_siguiente(temp->obtener_siguiente());
            temp->cambiar_siguiente(nuevo_nodo);
            cout<<"Insertado en el else, año: "<< nuevo_nodo->obtener_dato()->obtener_anio_publicacion()<<endl;   
        }        
    }
    cantidad++; 
    cout<<obtener_cantidad()<<endl;
}

int Lista_Lecturas::buscar_titulo(string titulo_buscado)
{
    Nodo<T> *temp = primero;
    int cont = 1;
    int cont2 = 0;
 
    while (temp) {
        if (temp->obtener_dato()->obtener_titulo() == titulo_buscado) {
            cout << "El dato se encuentra en la posición: " << cont << endl;
            cont2++;
        }
        temp = temp->obtener_siguiente();
        cont++;
    }
 
    if (cont2 == 0) {
        cout << "No existe el dato " << endl;
    }
    cout << endl << endl;

    return cont;
}



// void Lista_Lecturas::mostrar_lectura(T lectura){
//     lectura->mostrar();
// }

void Lista_Lecturas::baja(int pos) {
    Nodo<T>* borrar = primero;
    if (pos == 1) {
        primero = primero->obtener_siguiente();
    }
    else {
        Nodo<T>* anterior = obtener_nodo(pos - 1);
        borrar = anterior->obtener_siguiente();
        anterior->cambiar_siguiente(borrar->obtener_siguiente());
    }
    cantidad--;
    delete borrar;
}
#endif