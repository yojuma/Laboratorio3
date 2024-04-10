#ifndef PROBLEMA_4_H
#define PROBLEMA_4_H

#include<string>
using namespace std;

class Problema_4{
public:
    Problema_4();
    ~Problema_4(){
        //destructor por defecto
    }
    void codificar_basico(string ubicacion,string destino);
    void decodificar_basico(string ubicacion,string destino);
    void codificar_avanzado(string ubicacion,string destino,string reglas);
    void decodificar_avanzado(string ubicacion,string destino,string reglas);
};

#endif // PROBLEMA_4_H
