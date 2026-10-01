//doar subprogramul

#include <iostream>
using namespace std;

void generatoare(int n){
    int a, b; // a - par, != 0;
    
    for(b = n/2 + n % 2;  b > 0; b-- ){

        int C  = n / (b*b + 1);
        int br = n % (b*b + 1);

        if(br % b == 0){
            a = C * b + br/b;
            
            if(a % 2 ==1)
                continue;
            
            cout<<a<<'-'<<b<<' ';
        }

    }
}

int main(){
    int n;
    cin>>n;
    generatoare(n);
}