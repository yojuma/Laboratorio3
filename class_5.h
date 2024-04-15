#ifndef PROBLEMA_5_H
#define PROBLEMA_5_H
#include<iostream>
#include<string>
using namespace std;

class Duracion{
private:
    int minutos;
    int segundos;
public:
    Duracion(int m, int s) : minutos(m), segundos(s) {}
    int getMinutos();
    int getSegundos();
    void setMinutos(int m);
    void setSegundos(int s);
    ~Duracion(){
        //destructor por defecto
    }
};

class Cancion {
private:
    string nombre;
    string artista;
    int anoLanzamiento;
    string genero;
    Duracion duracion;

public:
    Cancion(const string& nombre, const string& artista, int anoLanzamiento,
            const string& genero, const Duracion& duracion)
            : nombre(nombre), artista(artista), anoLanzamiento(anoLanzamiento),
              genero(genero), duracion(duracion) {}

    string getNombre();
    string getArtista();
    int getAnoLanzamiento();
    string getGenero();
    Duracion getDuracion();
    void imprimir();
    void setNombre(const string& nuevoNombre);
    void setArtista(const string& nuevoArtista);
    void setAnoLanzamiento(int nuevoAnoLanzamiento);
    void setGenero(const string& nuevoGenero);
    void setDuracion(const Duracion& nuevaDuracion);
    ~Cancion(){
        //destructor por defecto
    }
};


class Problema_5{
private:
    static const int MAX_CANCIONES = 100;
    Cancion* canciones[MAX_CANCIONES];
    int numCanciones;

public:
    Problema_5() : numCanciones(0) {}
    void agregarCancion(const Cancion& cancion);
    void eliminarCancion(int indice);
    void imprimirLista();
    void ordenarPorNombre();
    void ordenarPorArtista();
    void ordenarPorAnoLanzamiento();
    void ordenarPorDuracion();
    void modificarCancion(int indice);
    void guardarLista(const string& nombreArchivo)const;
    void cargarLista(const string& nombreArchivo);
    ~Problema_5(){
        //destructor
        for (int i = 0; i < numCanciones; ++i) {
            delete canciones[i];
        }
    }
};

#endif // PROBLEMA_5_H
