#include<iostream>
#include<class_1.h>
#include<problemas.h>

using namespace std;

int main(){
    int opcion;
    cout << "***MENU PRINCIPAL***" << endl;
    cout << "1. Ejercicio 1" << endl;
    cout << "2. Ejercicio 2" << endl;
    cout << "3. Ejercicio 3" << endl;
    cout << "4. Ejercicio 4" << endl;
    cout << "5. Ejercicio 5\n" << endl;
    cout << "Seleccione una opcion: ";
    cin>>opcion;

    switch(opcion){
        case 1:
            problema1();
            break;
        case 2:
            problema2();
            break;
        case 3:
            problema3();
            break;
        case 4:
            problema4();
            break;
        case 5:
            //problema5();
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;

    }

    return 0;
}
