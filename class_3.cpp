#include <iostream>
#include "class_3.h"
#include <fstream>
#include <ctype.h>

Problema_3::Problema_3(){
    //constructor por defecto
}

int Problema_3::buscar_caracter(string ubicacion,char caracter){
    char ch;
    fstream fin(ubicacion,fstream::in);
    int contador=0;
    while(fin>>noskipws>>ch){
         if(tolower(ch)==caracter){
             contador++;
         }
    }
    return contador;
}

int Problema_3::buscar_secuencia(string ubicacion,string secuencia){
    string line;
    int count=0;
    ifstream file(ubicacion);
    cout<<endl;
    if(file.is_open()){
        while(getline(file,line)){
            cout<<endl;
            for (int i = 0; i < line.length(); i++) {
                string str = line.substr(i, secuencia.length());
                if(str==secuencia){
                    count++;
                }
            }
        }
    file.close();
    }
    return count;
}
