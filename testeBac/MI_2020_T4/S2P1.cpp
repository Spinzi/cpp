#include <iostream>
using namespace std;

int n, c1, c2;
int main(){
    cin>>n;
    do{
        c1 = n % 10; n /= 10; c2 = n % 10;
        if(c1>c2){
            c2 = c1; c1 = n % 10;
        }
        while( c1 < c2 ){
            cout<<c1;
            c2 = c2 / 2;
        }
    }while(n>9);
}