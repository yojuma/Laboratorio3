#include "class_4.h"
#include<string>
#include<fstream>
#include<iostream>
#include <ctype.h>
using namespace std;
Problema_4::Problema_4(){
    //constructor por defecto
}

void Problema_4::codificar_basico(string ubicacion,string destino){
    char ch;
    fstream fin(ubicacion,fstream::in);
    ofstream file;
    file.open(destino);
    while(fin>>noskipws>>ch){
        switch(tolower(ch)){
        case 'a': file<<'z';
            break;
        case 'b': file<<'y';
            break;
        case 'c': file<<'x';
            break;
        case 'd': file<<'w';
            break;
        case 'e': file<<'v';
            break;
        case 'f': file<<'u';
            break;
        case 'g': file<<'t';
            break;
        case 'h': file<<'s';
            break;
        case 'i': file<<'r';
            break;
        case 'j': file<<'q';
            break;
        case 'k': file<<'p';
            break;
        case 'l': file<<'o';
            break;
        case 'm': file<<'n';
            break;
        case 'n': file<<'m';
            break;
        case 'o': file<<'l';
            break;
        case 'p': file<<'k';
            break;
        case 'q': file<<'j';
            break;
        case 'r': file<<'i';
            break;
        case 's': file<<'h';
            break;
        case 't': file<<'g';
            break;
        case 'u': file<<'f';
            break;
        case 'v': file<<'e';
            break;
        case 'w': file<<'d';
            break;
        case 'x': file<<'c';
            break;
        case 'y': file<<'b';
            break;
        case 'z': file<<'a';
            break;
        case '\n':file<<'\n';
            break;
        case ' ':file<<' ';
            break;
        default:file<<ch;
            break;
        }
    }
    file.close();
}

void Problema_4::decodificar_basico(string ubicacion,string destino){
    char ch;
    fstream fin(ubicacion,fstream::in);
    ofstream file;
    file.open(destino);
    while(fin>>noskipws>>ch){
        switch(tolower(ch)){
        case 'a': file<<'z';
            break;
        case 'b': file<<'y';
            break;
        case 'c': file<<'x';
            break;
        case 'd': file<<'w';
            break;
        case 'e': file<<'v';
            break;
        case 'f': file<<'u';
            break;
        case 'g': file<<'t';
            break;
        case 'h': file<<'s';
            break;
        case 'i': file<<'r';
            break;
        case 'j': file<<'q';
            break;
        case 'k': file<<'p';
            break;
        case 'l': file<<'o';
            break;
        case 'm': file<<'n';
            break;
        case 'n': file<<'m';
            break;
        case 'o': file<<'l';
            break;
        case 'p': file<<'k';
            break;
        case 'q': file<<'j';
            break;
        case 'r': file<<'i';
            break;
        case 's': file<<'h';
            break;
        case 't': file<<'g';
            break;
        case 'u': file<<'f';
            break;
        case 'v': file<<'e';
            break;
        case 'w': file<<'d';
            break;
        case 'x': file<<'c';
            break;
        case 'y': file<<'b';
            break;
        case 'z': file<<'a';
            break;
        case '\n':file<<'\n';
            break;
        case ' ':file<<' ';
            break;
        default:file<<ch;
            break;
        }
    }
    file.close();

}

void Problema_4::codificar_avanzado(string ubicacion,string destino,string reglas){
    string line;
    char letra;
    char codificada;
    char ch;
    fstream fin(ubicacion,fstream::in);
    ofstream archivo;
    archivo.open(destino);
    while(fin>>noskipws>>ch){
        ifstream regla(reglas);
        while(getline(regla, line)){
            letra=line[0];
            codificada=line[2];

            if(isdigit(ch)){
                archivo<<ch;
                break;
            }
            if(ch==' '){
                archivo<<" ";
                break;
            }
            if(ch=='\n'){
                archivo<<"\n";
                break;
            }
            if(ch==letra){
                archivo<<codificada;
                break;
            }
        }
    regla.close();
    }
    archivo.close();
}

void Problema_4::decodificar_avanzado(string ubicacion,string destino,string reglas){
    string line;
    char letra;
    char decodificada;
    char ch;
    fstream fin(ubicacion,fstream::in);
    ofstream archivo;
    archivo.open(destino);
    while(fin>>noskipws>>ch){
        ifstream regla(reglas);
        while(getline(regla, line)){
            letra=line[0];
            decodificada=line[2];

            if(isdigit(ch)){
                archivo<<ch;
                break;
            }
            if(ch==' '){
                archivo<<" ";
                break;
            }
            if(ch=='\n'){
                archivo<<"\n";
                break;
            }
            if(ch==letra){
                archivo<<decodificada;
                break;
            }
        }
    regla.close();
    }
    archivo.close();
}

