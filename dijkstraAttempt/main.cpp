#include <iostream>
#include <fstream>
using namespace std;

ifstream IN("file.in");

int n, m, mat[100][100][3];//all 1 indexed, 1 - adjacents, 2 - cost

int dijkstra(int from, int to){

    int pList[100]{}; //price list
    for(int i = 1; i <= n; i++) pList[i] = INT_MAX;
    pList[from] = 0;
    bool visited[100]{}; //visited mat

    int pos = from;

    while(true){

        visited[pos] = true;
        int nextToVisit = -1;

        for(int i = 1; i <= n; i++){
            if(i == pos || !mat[pos][i][1]) continue;

            int price = pList[pos] + mat[pos][i][2];
            if(price < pList[i]) pList[i] = price;
            if(!visited[i]){
                if(nextToVisit == -1) nextToVisit = i;
                else if(pList[nextToVisit] > pList[i]) nextToVisit = i;
            }
        }

        if(nextToVisit==-1)break;
        else pos = nextToVisit;
    }

    return pList[to];

}

int main(){
    
    IN>>n>>m;
    for(int i = 0; i < m; i++){
        int a, b, w;
        IN>>a>>b>>w;
        mat[a][b][1] = mat[b][a][1] = 1;
        mat[a][b][2] = mat[b][a][2] = w;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout<<mat[i][j][1]<<'-'<<mat[i][j][2]<<' ';
        }
        cout<<endl;
    }

    for(int i = 1; i <= n; i++){
        int resp = dijkstra(1, i);
        cout<<"D 1-"<<i<<": "<<resp<<endl;
    }


}