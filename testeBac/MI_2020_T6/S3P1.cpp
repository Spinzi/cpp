#include <iostream>
using namespace std;

void prodprim(int n, int& p){
    p=1;
    int t = 2;
    while(n>1){
        bool r = true;
        while(n%t == 0){
            if(r){
                cout<<"New div "<<t<<'\n';
                p*=t;r=false;
            }
            n/=t;
        }
        t++;
    }
}

int main(){

    int a, b;
    cin>>a;
    prodprim(a, b);
    cout<<b;

} 
