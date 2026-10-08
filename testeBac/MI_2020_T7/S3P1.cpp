#include <iostream>
using namespace std;

int putere(int n, int p){

    for(int i = 2; i * i <= p; i++)
        if( p % i == 0 ) return -1;

    int c = 0;
    while(n % p == 0){
        n/=p;
        c++;
    }
    return c;
}

int main(){
    int n, p;
    cin>>n>>p;
    cout<<putere(n, p);

}
