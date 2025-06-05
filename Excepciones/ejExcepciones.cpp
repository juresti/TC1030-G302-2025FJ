
#include "Cafetera.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

float pideCapacidad(){
    float cap;
    bool correcta{false};
    while(!correcta){
        try{
            cout << "\nDime la capacidad de tu cafetera: ";
            cin >> cap; //cin.fail() verifica si el dato recibido no puede ser guardado
            // en la variable a la que se asigno.
            if (cin.fail()) throw runtime_error("Capacidad debe de ser un flotante");
            correcta = true; //ya paso, es correcta
        } catch (runtime_error e) {
            cin.clear(); //Resetear error del buffer de entrada
            cin.ignore(32767,'\n'); //Limpiar el buffer que todavia tiene el dato mal ingresado
            cout << "** ERROR en el dato de entrada\n";
            cout << e.what() << endl;
        }
    }
    return cap;
}

int pideTazasXMin(){
    int tazas{0};
    bool correcta{false};
    while(!correcta){
        try{
            cout << "\nDime las tazas por minuto de tu cafetera: ";
            cin >> tazas;
            if (cin.fail()) throw runtime_error("Tazas por minuto debe de ser un entero");
            correcta = true; //Ya todo bien
        } catch (runtime_error e){
            cin.clear(); //Resetear error del buffer de entrada
            cin.ignore(32767,'\n'); //Limpiar del buffer el dato mal ingresado
            cout << "** ERROR en el dato de entrada\n";
            cout << e.what() << endl;
        }
    }
    return tazas;
}

int main()
{
    float cap = pideCapacidad();
    int tazas = pideTazasXMin();

    Cafetera caf1{cap,tazas};
    cout << caf1.toString() << endl;
    
    return 0;
}
