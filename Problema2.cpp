#include<iostream>
#include<fstream>
#include<class_2.h>
using namespace std;

int problema2(){
    int opcion2;
    Problema_2 *archivo = new Problema_2();
    while(true){
        cout<<"\n***MENU E2***"<<endl;
        cout << "1. Leer un archivo de texto" << endl;
        cout << "2. Escribir en un archivo de texto" << endl;
        cout << "3. salir\n" << endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion2;

        if(opcion2==3){
            delete archivo;
            return 0;
        }
        string ubicacion;
        cout<<"Escriba la ubicacion del archivo: "<<endl;
        cin>>ubicacion;

        switch(opcion2){
        case 1:
            archivo->leerArchivo(ubicacion);
            break;

        case 2:
            archivo->escribirArchivo(ubicacion);
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            delete archivo;
            break;
        }

    }
    delete archivo;
    return 0;
}
