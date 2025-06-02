#include "Cafetera.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Cafetera cP{"Peque",1.0,1};
    Cafetera cM{"Mediana",3.5,3};
    Cafetera cG{"Jumbo",8.5,10};

    cout << cP.toString() << endl;
    cout << cM.toString() << endl;
    cout << cG.toString() << endl;

    int total = cP + cM + cG;
    
    cout << "Total de mis cafeteras: " << total << endl;
    return 0;
}
