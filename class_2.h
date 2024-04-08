#ifndef CLASS_2_H
#define CLASS_2_H

#include<iostream>
#include<string>
using namespace std;

class Problema_2{
private:
    string ubicacion;
public:
    void leerArchivo(string ubicacion);
    void escribirArchivo(string ubicacion);
    Problema_2(); //constructor por defecto
    ~Problema_2(){
        //destructor por defecto
    }
};

#endif // CLASS_2_H
