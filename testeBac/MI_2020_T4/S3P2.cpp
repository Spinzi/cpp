#include <iostream>
using namespace std;

int m, n, tab[20][20];

int main(){
    cin>>m>>n;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin>>tab[i][j];
    
    int c = 0;
    for(int j = 1; j < n; j++)
        {
            bool good = true;
            for(int i = 0; i < m; i++)
                if(tab[i][0] != !tab[i][j]){
                    good = false; break;
                }
            
            c += good;
        }
    
    cout<<c;
}