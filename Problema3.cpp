#include<iostream>
#include<fstream>
#include<class_3.h>
using namespace std;

int problema3(){
    int opcion3;
    Problema_3 *archivo = new Problema_3();
    while(true){
        cout<<"\n***MENU E3***"<<endl;
        cout << "1. Buscar un caracter." << endl;
        cout << "2. Buscar una secuencia." << endl;
        cout << "3. salir\n" << endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion3;

        if(opcion3==3){
            delete archivo;
            return 0;
        }

        string ubicacion;
        char caracter;
        string secuencia;
        string destino;
        int n_busquedas=0;

        switch(opcion3){
        cout<<"Escriba la ubicacion del archivo: "<<endl;
        cin>>ubicacion;
        cout<<endl;

        case 1:{
            cout<<"Cuantos caracteres desea buscar?: ";
            cin>>n_busquedas;

            cout<<"Ingrese la ubicacion destino para el archivo con la informacion: ";
            cin>>destino;
            ofstream file;
            file.open(destino);
            while(n_busquedas>0){
                cout<<"Ingrese el caracter que desea buscar: ";
                cin>>caracter;

                file<<"El caracter "<<caracter<<" se repite "<<archivo->buscar_caracter(ubicacion, caracter)<<" veces en el texto"<<"\n";
                file<<"\n";
                n_busquedas--;

                if(n_busquedas==0){
                    file.close();
                }
            }
            break;
        }
        case 2:{
            cout<<"Cuantas secuencias desea buscar?: ";
            cin>>n_busquedas;

            cout<<"Ingrese la ubicacion destino para el archivo con la informacion: ";
            cin>>destino;
            ofstream file;
            file.open(destino);
            while(n_busquedas>0){
                cout<<"Ingrese la secuencia que desea buscar: ";
                cin>>secuencia;

                file<<"La secuencia "<<secuencia<<" se repite "<<archivo->buscar_secuencia(ubicacion,secuencia)<<" veces en el texto"<<"\n";
                file<<"\n";
                n_busquedas--;

                if(n_busquedas==0){
                    file.close();
                }
            }
            break;
        }
        default:
            cout<<"Opcion no valida"<<endl;
            delete archivo;
            break;
        }
    }
    delete archivo;
    return 0;
}
