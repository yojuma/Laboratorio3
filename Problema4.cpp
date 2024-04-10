#include<iostream>
#include"class_4.h"
#include<fstream>
using namespace std;

int problema4(){
    int opcion4;
    Problema_4 *archivo4 = new Problema_4();
    while(true){
        cout<<"\n***MENU E4***"<<endl;
        cout << "1. Codificar texto." << endl;
        cout << "2. Decodificar texto." << endl;
        cout << "3. salir\n" << endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion4;

        if(opcion4==3){
            delete archivo4;
            return 0;
        }

        string ubicacion;
        string destino;
        string reglas;
        switch(opcion4){
        case 1:{
            cout<<"Escriba la ubicacion del archivo a codificar: "<<endl;
            cin>>ubicacion;
            cout<<endl;

            cout<<"Escriba la ubicacion para el archivo codificado: "<<endl;
            cin>>destino;
            cout<<endl;

            int option;
            cout<<"1. Codificacion basica"<<endl;
            cout<<"2. Codificacion avanzada"<<endl;
            cout<<"Seleccione una opcion: ";
            cin>>option;
            switch (option){
            case 1:{
                archivo4->codificar_basico(ubicacion,destino);
                cout<<"Codificacion exitosa: Revisa tu documento"<<endl;
                break;
                }
            case 2:{
                cout<<"Ingrese la ubicacion del archivo con las reglas de codificacion: ";
                cin>>reglas;
                archivo4->codificar_avanzado(ubicacion,destino,reglas);
                cout<<"Codificacion exitosa: Revisa tu documento"<<endl;
                break;
                }
            default:{
                cout<<"Opcion no valida"<<endl;
                delete archivo4;
                break;
                }
            }
            break;
        }
        case 2:{
            cout<<"Escriba la ubicacion del archivo a decodificar: "<<endl;
            cin>>ubicacion;
            cout<<endl;

            cout<<"Escriba la ubicacion para el archivo decodificado: "<<endl;
            cin>>destino;
            cout<<endl;
            int option2;
            cout<<"1. Decodificacion basica"<<endl;
            cout<<"2. Decodificacion avanzada"<<endl;
            cout<<"Seleccione una opcion: ";
            cin>>option2;
            switch (option2){
            case 1:{
                archivo4->decodificar_basico(ubicacion,destino);
                cout<<"Decodificacion exitosa: Revisa tu documento"<<endl;
                break;
                }
            case 2:{
                cout<<"Ingrese la ubicacion del archivo con las reglas de decodificacion: ";
                cin>>reglas;
                archivo4->decodificar_avanzado(ubicacion,destino,reglas);
                cout<<"Decodificacion exitosa: Revisa tu documento"<<endl;
                break;
                }
            default:{
                cout<<"Opcion no valida"<<endl;
                delete archivo4;
                break;
                }
            }
            break;
        }
        default:
            cout<<"Opcion no valida"<<endl;
            delete archivo4;
            break;
        }
    }
    delete archivo4;
    return 0;
}


