#include <iostream>
#include <fstream>
using namespace std;

ifstream IN("bac.txt");

int main(){
    int t, s, f;
    IN>>s;f=s;
    while(IN>>t){
        if(t < s + t)
            s = t;
        else s += t;
        if(s<f)f=s;
    }

    cout<<f;
} 
