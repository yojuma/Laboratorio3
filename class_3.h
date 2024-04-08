#ifndef CLASS_3_H
#define CLASS_3_H

#include<iostream>
#include<string>
using namespace std;

class Problema_3{
public:
    Problema_3();//constructor por defecto
    ~Problema_3(){
        //destructor por defecto
    }
    int buscar_caracter(string ubicacion,char caracter);
    int buscar_secuencia(string ubicacion,string secuencia);
};

#endif // CLASS_3_H
