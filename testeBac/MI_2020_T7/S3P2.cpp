#include <iostream>
using namespace std;

int n, m, a[20][20];
bool e = false;

int main(){

    cin>>m>>n;

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin>>a[i][j];

    for(int i = 0; i < m; i++){
        int valS = a[i][0];
        if(valS == a[i][n-1]) continue;
        for(int ii = 0; ii < m; ii++)
            if(i != ii && valS == a[ii][n-1]) {
                cout<< valS << ' ';
                e = true;
            }
        
    }
    if(!e) cout << "nepolarizate";
}