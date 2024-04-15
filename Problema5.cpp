#include<iostream>
#include"class_5.h"
#include<fstream>
using namespace std;

void mostrarMenu(){
    cout << "----- Menu E5 -----" << endl;
    cout << "1. Agregar cancion a la playlist" << endl;
    cout << "2. Eliminar cancion de la playlist" << endl;
    cout << "3. Imprimir playlist" << endl;
    cout << "4. Ordenar playlist" << endl;
    cout << "5. Modificar Cancion de la playlist" << endl;
    cout << "6. Guardar playlist en un archivo" << endl;
    cout << "7. Cargar playlist desde un archivo" << endl;
    cout << "8. Salir" << endl;
    cout << "----------------" << endl;
    cout << "Seleccione una opcion: ";
}

void menu_op_4(){
    cout << "--------------------------------------" << endl;
    cout<<"1. Ordenar playlist por nombre de canciones"<<endl;
    cout<<"2. Ordenar playlist por artistas"<<endl;
    cout<<"3. Ordenar playlist por ano de lanzamiento"<<endl;
    cout<<"4. Ordenar playlist por duracion"<<endl;
    cout<<"5. Salir"<<endl;
    cout << "--------------------------------------" << endl;
    cout<<"Seleccione una opcion: "<<endl;
}


int problema5() {
    Problema_5 playlist;

    int opcion;
    do{
        mostrarMenu();
        cin >> opcion;
        cout<<endl;

        switch (opcion) {
            case 1: {
                string nombre, artista, genero;
                int ano, minutos, segundos;
                cout << "--------------------------------------" << endl;
                cout << "Ingrese el nombre de la cancion: ";
                cin >> nombre;
                cout << "Ingrese el artista: ";
                cin >> artista;
                cout << "Ingrese el ano de lanzamiento: ";
                cin >> ano;
                cout << "Ingrese el genero: ";
                cin >> genero;
                cout << "Ingrese la duracion (minutos segundos): ";
                cin >> minutos >> segundos;
                playlist.agregarCancion(Cancion(nombre, artista, ano, genero, Duracion(minutos, segundos)));
                break;
            }
            case 2: {
                int indice;
                cout << "--------------------------------------" << endl;
                cout << "Ingrese el numero de la cancion a eliminar: ";
                cin >> indice;
                playlist.eliminarCancion(indice - 1); // Ajustamos el índice para que sea 0-based
                break;
            }
            case 3:
                playlist.imprimirLista();
                break;
            case 4:{
            int option;
            menu_op_4();
            cin>>option;
            switch(option){
            case 1:
                playlist.ordenarPorNombre();
                break;
            case 2:
                playlist.ordenarPorArtista();
                break;
            case 3:
                playlist.ordenarPorAnoLanzamiento();
                break;
            case 4:
                playlist.ordenarPorDuracion();
                break;
            case 5:
                break;
            default:
                cout<<"Opcion invalida."<<endl;
                break;
                }
            }
            break;
        case 5:
        int indice;
        cout << "Ingrese el numero de la cancion a modificar: ";
        cin >> indice;
        playlist.modificarCancion(indice - 1);
            break;
        case 6:{
            string ubicacion;
            cout<<"Ingrese la ubicacion del archivo para guardar la playlist: ";
            cin>>ubicacion;
            playlist.guardarLista(ubicacion);
        }
            break;
        case 7:{
            string ubicacion;
            cout<<"Ingrese la ubicacion del archivo para cargar la playlist: ";
            cin>>ubicacion;
            playlist.cargarLista(ubicacion);
        }
            break;
        case 8:
            cout << "Saliendo del programa..." << endl;
            cout<<endl;
            break;
        default:
            cout << "Opcion invalida. Por favor, seleccione una opcion valida." << endl;
            break;
        }
    }
    while (opcion != 8);
    return 0;
}
