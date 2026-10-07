#include <iostream>
using namespace std;

int n, x, y, d;

int main(){
    cin>>n;
    x = 1; y = n; d = 2;
    while(x<y){
        if(n%d==0){
            x=d;
            y=n/d;
        }
        d++;
    }
    if(x==y)
        cout<<'D'<<x;
    else
        cout<<'N';
}