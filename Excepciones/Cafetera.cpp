
#include "Cafetera.hpp"
#include <string>
using namespace std;

Cafetera::Cafetera(float cap,int tazas) : capacidad{cap},tazasXSegundo{tazas} {}
    
string Cafetera::toString(){
    return "Cafetera(" + to_string(capacidad) + "," + to_string(tazasXSegundo) + ")";
}

int operator +(Cafetera &c1,Cafetera &c2){
    return c1.tazasXSegundo + c2.tazasXSegundo;
}

int operator +(int d,Cafetera &c1){
    return d + c1.tazasXSegundo;
}

