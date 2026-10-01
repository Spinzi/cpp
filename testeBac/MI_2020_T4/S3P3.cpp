#include <iostream>
#include <fstream>
using namespace std;

ifstream IN("bac.txt");

int main(){
    int last, current, count=0;
    bool ran = false;
    while(IN>>current){
        if(last == current) count++;
        else if (count == 2){
            cout<<last<<' ';
            ran = true;
            count = 1;
        }else{
            count = 1;
        }
        last = current;
    }
    if(count == 2) cout << last << ' ';
    if(!ran) cout<<"nu exista";
}