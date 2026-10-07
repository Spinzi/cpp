#include <iostream>
using namespace std;

int baza(int n){
    int r=1;
    while(n > 0){
        if ( n % 10 >= r) r = n%10+1;
        n/=10;
    }
    return r;
}


int main(){
    int n;
    cin>>n;
    cout<<baza(n);
}