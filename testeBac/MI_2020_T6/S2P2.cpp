#include <iostream>
using namespace std;
int main(){
    int a[4][5]{};
    a[3][0]=1;
    for(int i = 3; i >= 0; i--)
        for(int j = 0; j < 5; j++)
            if(i==3&&j==0)continue;
            else if (j==0)a[i][j]=a[i+1][4]+1;
            else a[i][j]=a[i][j-1]+1;

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++)
            cout << a[i][j]<<' ';
        cout<<endl;
    }
} 
