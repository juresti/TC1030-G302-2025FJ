#include "Cafetera.hpp"

Cafetera::Cafetera(std::string n,float c,int t) : nombre{n}, capacidad{c},
                                                tazasXmin{t} {}
std::string Cafetera::toString(){
    return "Cafetera(" + std::to_string(capacidad) + "," +
                        std::to_string(tazasXmin) + "," + 
                        nombre + ")";
}

int operator +(Cafetera &c1,Cafetera &c2){
    return c1.tazasXmin + c2.tazasXmin;
}

int operator +(int num,Cafetera &c){
    return num + c.tazasXmin;
}
