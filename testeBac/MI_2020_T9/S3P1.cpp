#include <iostream>
using namespace std;

void suma(int n, int& s){

    s = 0;
    bool p[10]{};

    while(n){
        p[n%10]=true;
        n/=10;
    }
    
    for(int i = 1; i < 10; i += 2) if(p[i]) s += i;

}

int main(){
    int x;
    cin>>x;
    suma(x, x);
    cout<<x;
}