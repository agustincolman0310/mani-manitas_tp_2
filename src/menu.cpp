#include "../header/menu.h"
using namespace std;

Cola cola;




Menu::Menu(Lista_Lecturas lecturas, Tabla_Hashing escritores){
    this->lecturas = lecturas;
    this->escritores = escritores;
}

void Menu::bienvenida(){
    string nombre;
    char tecla;
    cout << CYAN << "\t _______  ___   _______  __    _  __   __  _______  __    _  ___   ______   _______ \n";
    cout << "\t|  _    ||   | |       ||  |  | ||  | |  ||       ||  |  | ||   | |      | |       |\n";
    cout << "\t| |_|   ||   | |    ___||   |_| ||  |_|  ||    ___||   |_| ||   | |  _    ||   _   |\n";
    cout << "\t|       ||   | |   |___ |       ||       ||   |___ |       ||   | | | |   ||  | |  |\n";
    cout << "\t|  _   | |   | |    ___||  _    ||       ||    ___||  _    ||   | | |_|   ||  |_|  |\n";
    cout << "\t| |_|   ||   | |   |___ | | |   | |     | |   |___ | | |   ||   | |       ||       |\n";
    cout << "\t|_______||___| |_______||_|  |__|  |___|  |_______||_|  |__||___| |______| |_______|\n\n"<< BLANCO;

    cout << "\t\t\t\t  _______"<< AMARILLO <<"    ___" << BLANCO <<"      _______ \n";
    cout << "\t\t\t\t |   _   |"<< AMARILLO <<"  |   |"<< BLANCO <<"    |   _   |\n";
    cout << "\t\t\t\t |  |_|  |"<< AMARILLO <<"  |   |" << BLANCO <<"    |  |_|  |\n";
    cout << "\t\t\t\t |       |"<< AMARILLO <<"  |   |" << BLANCO <<"    |       |\n";
    cout << "\t\t\t\t |       |"<< AMARILLO <<"  |   |___ " << BLANCO <<"|       |\n";
    cout << "\t\t\t\t |   _   |"<< AMARILLO <<"  |       |" << BLANCO <<"|   _   |\n";
    cout << "\t\t\t\t |__| |__|"<< AMARILLO <<"  |_______|" << BLANCO <<"|__| |__|\n";

    cout << CYAN << "\t _______  ___   _______  ___      ___   _______  _______  _______  _______  _______ \n";
    cout << "\t|  _    ||   | |  _    ||   |    |   | |       ||       ||       ||       ||   _   |\n";
    cout << "\t| |_|   ||   | | |_|   ||   |    |   | |   _   ||_     _||    ___||       ||  |_|  |\n";
    cout << "\t|       ||   | |       ||   |    |   | |  | |  |  |   |  |   |___ |      _||       |\n";
    cout << "\t|  _   | |   | |  _   | |   |___ |   | |  |_|  |  |   |  |    ___||     |_ |       |\n";
    cout << "\t| |_|   ||   | | |_|   ||       ||   | |       |  |   |  |   |___ |       ||   _   |\n";
    cout << "\t|_______||___| |_______||_______||___| |_______|  |___|  |_______||_______||__| |__|\n\n" << BLANCO;

    cout << "\tIngrese su nombre: ";
    cin>>nombre;

    system("clear");

    cout << "\t\tSaludos " << MAGENTA << nombre << BLANCO << " nosotros somos el grupo 🦣 " << CYAN << " MANI MANITO " << BLANCO << "🦣 , esperamos que disfrutes de nuestro programa! \n\n";
    cout << "\t\t\tPara ingresar al " << VERDE << "MENU" << BLANCO << " presione la tecla" << ROJO << " M" << BLANCO << " y luego " << ROJO <<"ENTER" << BLANCO <<": ";
    cin >> tecla;

    system("clear");
}

int Menu::mostrar_menu(){
    int opcion = 0;
    cout <<" 🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦\n";
    cout << " 🟦\t-------------------|"<<VERDE "MENU"<<BLANCO"|-------------------                     🟦\n";
    cout << " 🟦\t["<<MAGENTA<<"1"<<BLANCO"] Agregar nueva lectura.                                       🟦\n"; 
    cout << " 🟦\t["<<MAGENTA<<"2"<<BLANCO"] Quitar una lectura.                                          🟦\n";     
    cout << " 🟦\t["<<MAGENTA<<"3"<<BLANCO"] Agregar escritor.                                            🟦\n";
    cout << " 🟦\t["<<MAGENTA<<"4"<<BLANCO"] Cambiar dato de un escritor.                                 🟦\n";
    cout << " 🟦\t["<<MAGENTA<<"5"<<BLANCO"] Listar escritores.                                           🟦\n"; 
    cout << " 🟦\t["<<MAGENTA<<"6"<<BLANCO"] Sortear lecturas random.                                     🟦\n"; 
    cout << " 🟦\t["<<MAGENTA<<"7"<<BLANCO"] Listar todas las lecturas.                                   🟦\n"; 
    cout << " 🟦\t["<<MAGENTA<<"8"<<BLANCO"] Listar lecturas entre años.                                  🟦\n";
    cout << " 🟦\t["<<MAGENTA<<"9"<<BLANCO"] Listar lecturas por escritor.                                🟦\n";
    cout << " 🟦\t["<<MAGENTA<<"10"<<BLANCO"] Listar novelas por género.                                  🟦\n";
    cout << " 🟦\t["<<MAGENTA<<"11"<<BLANCO"] Quitar lectura de menor tiempo.                             🟦\n";
    cout << " 🟦\t["<<MAGENTA<<"12"<<BLANCO"] Mostrar orden y tiempo mínimo en leer todas las lecturas.   🟦\n";
    cout << " 🟦\t["<<MAGENTA<<"13"<<BLANCO"] Eliminar escritor.                                          🟦\n";
    cout << " 🟦\t["<<MAGENTA<<"14"<<BLANCO"] Salir.                                                      🟦\n";
    cout << " 🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦\n";
    cout << "\t⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜\n";
    cout << "\t⬜"<<AMARILLO<<" Ingrese una opción "<<BLANCO"⬜\n";
    cout << "\t⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜⬜\n";
    cout << "\t▶️  ";
    cin >> opcion;
    return opcion;
}

void Menu::procesar_opciones(int opcion){ 
    switch(opcion){ 
        case OPCION_1:  
            agregar_lectura();
            volver_menu();
        break;
        case OPCION_2:
            eliminar_lectura();
            volver_menu();
        break;
        case OPCION_3:
            agregar_escritor();
            volver_menu();
        break;
        case OPCION_4:
            cambiar_dato_escritor();
            volver_menu();
        break;
        case OPCION_5:
            imprimir_escritores(); 
            volver_menu();
        break;
        case OPCION_6:
            sortear_lectura_random();
            volver_menu();
        break;    
        case OPCION_7:
            imprimir_lecturas();
            volver_menu();
        break;
        case OPCION_8:
            listar_entre_anios();
            volver_menu();
        break;
        case OPCION_9:
            listar_por_escritor(); 
            volver_menu();
        break;
        case OPCION_10:
            listar_por_genero();
            volver_menu();
        break;
        case OPCION_11:
            baja_cola();
            volver_menu();
        break;
        case OPCION_12:
            mostrar_tiempo_minimo();
            volver_menu();
        break;
        case OPCION_13:
            eliminar_escritor();
            volver_menu();
        break;
    }
}

void Menu::validar_datos_lectura(char &tipo_lectura, string &titulo, string &referencia, int &minutos, int &anio_publicacion){
    int isni;
    cout << "Ingrese el tipo de lectura ("<<MAGENTA<<"C"<<BLANCO" para cuento, "<<MAGENTA<< "P" <<BLANCO<< " para poema, "<< MAGENTA<< "N" <<BLANCO<< " para novela): \n";
    cin >> tipo_lectura;
    while(toupper(tipo_lectura) != TIPO_NOVELA && toupper(tipo_lectura) != TIPO_POEMA && toupper(tipo_lectura) != TIPO_CUENTO){
        cout << "Juraria que no conozco ese tipo de lectura... "<<CARA_PENSATIVA<<endl;
        cout << "Ingrese el tipo de lectura nuevamente: \n";
        cin >> tipo_lectura;
    }
    
    cout<< "Ingrese el titulo: \n";
    cin.ignore();
    getline(cin, titulo);
    while(lecturas.consulta_titulo(titulo) != NULL){
        cout << "Me parece que ese titulo ya se uso!! \n";
        cout << "Vuelva a ingresar un titulo no usado: \n";
        getline(cin, titulo);
    }
    
    cout << "\nAutores disponibles: \n" << endl;
    escritores.mostrar_referencias();
    cout << "Ingrese el " << VERDE << "ISNI" << BLANCO << " del autor: \n";
    cin >> isni;
    referencia = "(" + to_string(isni) + ")";
    
    cout << "Ingrese la cantidad de minutos: \n";
    cin >> minutos;
    while(minutos < 1){
        cout << "Ingrese una cantidad correcta de mínutos: \n";
        cin >> minutos;
    }

    cout << "Ingrese el año publicacion: \n";
    cin >> anio_publicacion;
}

void Menu::agregar_lectura(){
    string titulo, referencia, genero, tema, titulo_libro, nuevo_nombre;
    char tipo_lectura;
    int minutos, anio_publicacion, cant_versos;
    Lectura* lectura;
    validar_datos_lectura(tipo_lectura, titulo, referencia, minutos, anio_publicacion);
    if (toupper(tipo_lectura) == TIPO_NOVELA){
        cout << "Ingrese el genero: \n";
        cin >> genero;
        while(lecturas.convertir_en_mayuscula(genero) != "TERROR" && lecturas.convertir_en_mayuscula(genero) != "DRAMA" && lecturas.convertir_en_mayuscula(genero) != "COMEDIA" && lecturas.convertir_en_mayuscula(genero) != "FICCION" && lecturas.convertir_en_mayuscula(genero) != "SUSPENSO" && lecturas.convertir_en_mayuscula(genero) != "ROMANTICA" && lecturas.convertir_en_mayuscula(genero) != "HISTORICA"){
            cout <<"Ingrese un genero válido... \n";
            cin >> genero;
        }
        lectura = new Novela(tipo_lectura, titulo, minutos, anio_publicacion, escritores.consulta(referencia), lecturas.procesar_genero(lecturas.convertir_en_mayuscula(genero)));

        if(lecturas.convertir_en_mayuscula(genero) == NOVELA_HISTORICA){
            cout << "Ingrese el tema: \n";
            cin >> tema;  
            lectura = new Historica(tipo_lectura, titulo, minutos, anio_publicacion, escritores.consulta(referencia), lecturas.procesar_genero(lecturas.convertir_en_mayuscula(genero)), const_cast<char*>(tema.c_str()));
            }
    }
    else if(toupper(tipo_lectura) == TIPO_CUENTO){
        cout << "Ingrese el título del libro: \n";
        cin.ignore();
        getline(cin, titulo_libro);

        lectura = new Cuento(tipo_lectura, titulo, minutos, anio_publicacion,escritores.consulta(referencia) , titulo_libro);

    }
    else if(toupper(tipo_lectura) == TIPO_POEMA){
        cout << "Ingrese la cantidad de versos: \n";
        cin >> cant_versos;
        lectura = new Poema(tipo_lectura, titulo, minutos, anio_publicacion, escritores.consulta(referencia), cant_versos);

    } 
    lecturas.alta(lectura);
    
}

void Menu::eliminar_lectura(){
    string titulo;
    cout << "Ingrese el título: \n";
    cin.ignore();
    getline(cin, titulo);
    while(lecturas.consulta_titulo(titulo) == NULL){
        cout << "El título ingresado no existe \n";
        cout << "Ingrese el titulo: \n";
        getline(cin, titulo);
    }
    lecturas.baja(titulo);
    
}

void Menu::agregar_escritor(){
    string nombre_completo, nacionalidad, referencia;
    int anio_nacimiento, anio_fallecimiento, isni;
    Escritor* escritor;
    cout  << "🔢 Ingrese el número de "<< VERDE << "ISNI " << BLANCO "(número de 4 digitos): \n" ;
    cin >> isni;
    referencia = "(" + to_string(isni) + ")";

    cout << "🏷️  Ingrese el nombre completo del escritor: \n";
    cin.ignore();
    getline(cin, nombre_completo);

    cout << "🌎 Ingrese la nacionalidad del escritor: \n";
    cin >> nacionalidad;
    
    cout << "📅 Ingrese el año de nacimiento del escritor: \n";
    cin >> anio_nacimiento;

    cout << "🪦 Ingrese el año de fallecimiento del escritor: \n";
    cin >> anio_fallecimiento;
    
    while(anio_nacimiento > anio_fallecimiento && anio_fallecimiento != -1){
        cout << "¿Te parece que el año de fallecimiento sea menor al de nacimiento? "<< CARA_PENSATIVA <<endl;
        cout << "Ingrese el año de fallecimiento del escritor: \n";
        cin >> anio_fallecimiento;
    }
    escritor = new Escritor(nombre_completo, nacionalidad, anio_nacimiento, anio_fallecimiento, referencia);
    escritores.insertar_escritor(escritor);
    
}

void Menu::cambiar_dato_escritor(){
    string referencia;
    int anio_fallecimiento, isni;

    escritores.mostrar_referencias();

    cout << "Ingresá el ISNI del escritor que queres modificar: \n";   
    cin >> isni;

    referencia = "("+ to_string(isni) + ")";

    cout << "Ingrese la fecha de fallecimiento nueva: \n";
    cin >> anio_fallecimiento;
    
    Escritor* consulta = escritores.consulta(referencia);
    consulta->modificar_anio_fallecimiento(anio_fallecimiento);
    
}

void Menu::imprimir_escritores(){
    cout << VERDE << "\n\tImprimiendo... \n" << BLANCO;
    cout << "\n";
    escritores.mostrar_escritores();
    
}

void Menu::sortear_lectura_random(){
    int valor;
    srand((unsigned int)time(NULL));
    valor = 1 + rand() % lecturas.obtener_cantidad();
    cout << "La lectura sorteada es la " <<valor<< "...\n";
    cout << VERDE << "\n\tImprimiendo... \n" << BLANCO;
    cout << "\n";
    lecturas.sortear_lectura(valor);
    
}

void Menu::imprimir_lecturas(){
    cout << VERDE << "\n\tImprimiendo... \n" << BLANCO;
    cout << "\n";
    lecturas.listar_lecturas();
    
}

void Menu::listar_entre_anios(){
    int anio_1, anio_2;
    cout << "Ingresa desde: ";
    cin >> anio_1;
    cout << "Hasta: ";
    cin >> anio_2;
    while(anio_1 > anio_2){
        cout << "El primer año ingresado debe ser mayor al segundo... \n";
        cout << "Ingresa desde: ";
        cin >> anio_1;
        cout << "Hasta: ";
        cin >> anio_2;
    }

    lecturas.listar_entre_anios(anio_1,anio_2);
    
}

void Menu::listar_por_escritor(){
    string nombre_completo;
    cout << "Ingresa el nombre del escritor: \n";
    cin.ignore();
    getline(cin, nombre_completo);
    lecturas.listar_por_escritor(nombre_completo);
    
}

void Menu::listar_por_genero(){
    string genero;
    cout << "Ingresa el genero: \n";
    cin >> genero;
    cout << "\n";
    lecturas.procesar_genero(genero);
    lecturas.listar_por_genero(genero);
    
}

void Menu::baja_cola(){
    string respuesta;
    cargar_cola();
    
    cout<<"¿Leyó "<< cola.consulta()->obtener_titulo() << "? (Ingrese "<< VERDE << "SI" << BLANCO << " de haberla leído, " << ROJO << "NO" << BLANCO << " de lo contrario)." << endl;
    cin >> respuesta;
    
    while(!cola.vacia() && respuesta != "NO"){

        if(respuesta == "SI"){
            cola.baja();
        }
        if(!cola.vacia()){
            cout << "¿Leyó " << cola.consulta()->obtener_titulo() << "? (Ingrese "<< VERDE << "SI" << BLANCO << " de haberla leído, " << ROJO << "NO" << BLANCO << " de lo contrario)." << endl;
            cin >> respuesta;
        }
    }
    if(respuesta == "NO"){
        cout << endl;
        cout << "Tus lecturas pendientes son... " << endl;
        cout << endl;
        cola.mostrar_cola();
    }
    cola.vaciar_cola();
    cout << endl;
    
}

void Menu::cargar_cola(){
    int minimo = 0;
    int cantidad = lecturas.obtener_cantidad();
    for(int i = 0; i < cantidad ; i++){
        cola.alta(lecturas.encontrar_lectura_menor(minimo));
    }
}

void Menu::vaciar_listas(){
    escritores.vaciar_tabla();
    lecturas.vaciar_lista();
    
}

void Menu::mostrar_tiempo_minimo(){
    Arbol_Minimo kruskal(lecturas);
    kruskal.ejecutar_kruskal();
}

void Menu::eliminar_escritor(){
    int isni;
    escritores.mostrar_referencias();
    cout << "Ingrese el "<< VERDE << "ISNI" << BLANCO <<" del escritor que quiere eliminar: \n";
    cin >> isni;
    lecturas.modificar_por_escritor(isni);
    escritores.eliminar_escritor(isni);
    
}

void Menu::volver_menu(){
    char tecla;
    cout << "Ingrese cualquier tecla para volver al menú 🔁.\n";
    cin >> tecla;
    system("clear");
} 