#include <iostream>
#include <string.h>
using namespace std;

int n;
char c[20][21];

int main(){
    cin>>n;
    cin.ignore();
    for(int i = 0; i < n; i++)
        cin.getline(c[i], 21);

    for(int i = 0; i < n-1; i++)
        if(strstr(c[i], c[n-1]) == c[i])
            cout<<c[i]<<' ';
}