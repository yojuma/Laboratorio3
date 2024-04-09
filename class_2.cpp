#include "class_2.h"
#include<fstream>

Problema_2::Problema_2(){
    //constructor por defecto
}

void Problema_2::leerArchivo(string ubicacion){
    string line;
    ifstream file(ubicacion);
    cout<<endl;
    if(file.is_open()){
        while(getline(file,line)){
            cout<<line<<endl;
        }
        file.close();
    }
    else{
        cout<<"Error: El sistema no pudo encontrar el archivo especificado"<<endl;
    }

}

void Problema_2::escribirArchivo(string ubicacion){
    string linea;
    string seguir="y";
    ofstream file;
    file.open(ubicacion);
    if(file.is_open()){
        while(seguir=="y"||seguir=="Y"){
            cout<<"Ingrese el texto que quiere anadir al documento: ";
            cin>>linea;
            file<<linea<<"\n";
            file<<"\n";
            cout<<"desea escribir algo mas en el documento?(y/n): ";
            cin>>seguir;
        }
    }
    else{
        cout<<"Error: El sistema no pudo encontrar el archivo especificado"<<endl;
    }
    file.close();
}


