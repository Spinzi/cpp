#include <iostream>
#include <fstream>
using namespace std;

ifstream IN("bac.txt");

int suma_max, suma_curenta, t;

int main(){
    IN>>t;
    suma_max = suma_curenta = t;

    while(IN>>t){
        suma_curenta = ((suma_curenta + t) > t) ? (suma_curenta + t) : t;

        suma_max = (suma_max > suma_curenta) ? suma_max : suma_curenta;

    }

    cout<<suma_max;

    IN.close();
}