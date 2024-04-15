#include "class_5.h"
#include <fstream>
#include <vector>
#include <algorithm>

//class Duracion
int Duracion::getMinutos(){
    return minutos;
}

int Duracion::getSegundos(){
    return segundos;
}

void Duracion::setMinutos(int m){
    minutos = m;
}

void Duracion::setSegundos(int s){
    segundos = s;
}


//class Cancion
string Cancion::getNombre(){
    return nombre;
}

string Cancion::getArtista(){
    return artista;
}

int Cancion::getAnoLanzamiento(){
    return anoLanzamiento;
}

string Cancion::getGenero(){
    return genero;
}

Duracion Cancion::getDuracion(){
    return duracion;
}
void Cancion::setNombre(const std::string& nuevoNombre){
    nombre = nuevoNombre;
}

void Cancion::setArtista(const std::string& nuevoArtista){
    artista = nuevoArtista;
}

void Cancion::setAnoLanzamiento(int nuevoAnoLanzamiento){
    anoLanzamiento = nuevoAnoLanzamiento;
}

void Cancion::setGenero(const std::string& nuevoGenero){
    genero = nuevoGenero;
}

void Cancion::setDuracion(const Duracion& nuevaDuracion){
    duracion = nuevaDuracion;
}

void Cancion::imprimir(){
    cout << "--------------------------------------" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Artista: " << artista << endl;
    cout << "Ano de lanzamiento: " << anoLanzamiento << endl;
    cout << "Genero: " << genero << endl;
    cout << "Duracion: " << duracion.getMinutos() << ":" << duracion.getSegundos() << endl;
    cout << "--------------------------------------" << endl;
}


//class Problema_5
void Problema_5::agregarCancion(const Cancion &cancion){
    if (numCanciones < MAX_CANCIONES) {
        canciones[numCanciones] = new Cancion(cancion);
        numCanciones++;
    } else {
        cout << "--------------------------------------" << endl;
        cout << "No se pueden agregar mas canciones, la playlist esta llena." << endl;
    }
}

void Problema_5::eliminarCancion(int indice){
    if (indice >= 0 && indice < numCanciones) {
        delete canciones[indice];
        for (int i = indice; i < numCanciones - 1; ++i) {
            canciones[i] = canciones[i + 1];
        }
        numCanciones--;
    } else {
        cout << "--------------------------------------" << endl;
        cout << "Indice de cancion invalido." << endl;
    }
}

void Problema_5::imprimirLista(){
    for (int i = 0; i < numCanciones; ++i) {
        cout << "Cancion " << i + 1 << ":" << endl;
        canciones[i]->imprimir();
        cout << endl;
    }
    if(numCanciones==0){
        cout << "--------------------------------------" << endl;
        cout<<"La playlist esta vacia"<<endl;
        cout<<endl;
    }
}

void Problema_5::ordenarPorNombre(){
    for (int i = 0; i < numCanciones - 1; ++i) {
        for (int j = 0; j < numCanciones - i - 1; ++j) {
            if (canciones[j]->getNombre() > canciones[j + 1]->getNombre()) {
                swap(canciones[j], canciones[j + 1]);           //el metodo swap recibe 2 valores e intercambia estos valores
            }
        }
    }
}

void Problema_5::ordenarPorArtista(){
    for (int i = 0; i < numCanciones - 1; ++i) {
        for (int j = 0; j < numCanciones - i - 1; ++j) {
            if (canciones[j]->getArtista() > canciones[j + 1]->getArtista()) {
                swap(canciones[j], canciones[j + 1]);           //el metodo swap recibe 2 valores e intercambia estos valores
            }
        }
    }
}

void Problema_5::ordenarPorAnoLanzamiento(){
    for (int i = 0; i < numCanciones - 1; ++i) {
        for (int j = 0; j < numCanciones - i - 1; ++j) {
            if (canciones[j]->getAnoLanzamiento() > canciones[j + 1]->getAnoLanzamiento()) {
                swap(canciones[j], canciones[j + 1]);           //el metodo swap recibe 2 valores e intercambia estos valores
            }
        }
    }
}

void Problema_5::ordenarPorDuracion(){
    for(int i = 0; i < numCanciones - 1; ++i) {
        for(int j = 0; j < numCanciones - i - 1; ++j) {
            int duracionJ = canciones[j]->getDuracion().getMinutos() * 60 + canciones[j]->getDuracion().getSegundos();
            int duracionJ1 = canciones[j + 1]->getDuracion().getMinutos() * 60 + canciones[j + 1]->getDuracion().getSegundos();
            if(duracionJ > duracionJ1) {
                swap(canciones[j], canciones[j + 1]);           //el metodo swap recibe 2 valores e intercambia estos valores
            }
        }
    }
}

void Problema_5::modificarCancion(int indice){
    if (indice >= 0 && indice < numCanciones) {
        string nombre, artista, genero;
        int ano, minutos, segundos;
        cout << "Ingrese el nuevo nombre de la cancion: ";
        cin >> nombre;
        cout << "Ingrese el nuevo artista: ";
        cin >> artista;
        cout << "Ingrese el nuevo ano de lanzamiento: ";
        cin >> ano;
        cout << "Ingrese el nuevo genero: ";
        cin >> genero;
        cout << "Ingrese la nueva duracion (minutos segundos): ";
        cin >> minutos >> segundos;
        canciones[indice]->setNombre(nombre);
        canciones[indice]->setArtista(artista);
        canciones[indice]->setAnoLanzamiento(ano);
        canciones[indice]->setGenero(genero);
        canciones[indice]->setDuracion(Duracion(minutos, segundos));
        cout << "Cancion modificada correctamente." << endl;
        cout<<endl;
    } else {
        cout << "Indice de cancion invalido." << endl;
    }
}

void Problema_5::guardarLista(const string& nombreArchivo)const{
    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        for (int i = 0; i < numCanciones; ++i) {
            archivo << "Nombre: " << canciones[i]->getNombre() << endl;
            archivo << "Artista: " << canciones[i]->getArtista() << endl;
            archivo << "Ano de lanzamiento: " << canciones[i]->getAnoLanzamiento() << endl;
            archivo << "Genero: " << canciones[i]->getGenero() << endl;
            archivo << "Duracion: " << canciones[i]->getDuracion().getMinutos() << ":" << canciones[i]->getDuracion().getSegundos() << std::endl;
            archivo << endl;
        }
        cout << "Lista de canciones guardada exitosamente"<< endl;
        cout<<endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}

void Problema_5::cargarLista(const string& nombreArchivo){
    ifstream archivo(nombreArchivo);
    if(archivo.is_open()){
        string linea;
        string nombre, artista, genero;
        int ano, minutos, segundos;
        while(getline(archivo, linea)){
            if(linea.find("Nombre: ") != string::npos){
                nombre = linea.substr(8);                               //substr para ignorar las (n) posiciones principales de la linea
            } else if(linea.find("Artista: ") != string::npos){
                artista = linea.substr(9);
            } else if(linea.find("Ano de lanzamiento: ") != string::npos){
                ano = stoi(linea.substr(21));
            } else if(linea.find("Genero: ") != string::npos){        //find para encontrar en la linea cierto caracter o cadena
                genero = linea.substr(8);
            } else if(linea.find("Duracion: ") != string::npos){
                minutos = stoi(linea.substr(10, 2));
                segundos = stoi(linea.substr(13));
                // Creamos la Cancion y la agregamos a la playlist
                agregarCancion(Cancion(nombre, artista, ano, genero, Duracion(minutos, segundos)));
            }
        }
        cout << "Lista de canciones cargada exitosamente"<< endl;
        cout<<endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
}
