#include <iostream>
#include <fstream>
using namespace std;

constexpr char IN_FNAME[] = "file.in";

fstream IN(IN_FNAME);

int n, m,
    mat[100][100][3],
    from, to; //1 indexed

int dijkstra(int from, int to){
	int _mat[100][100][3]{};//visited,weight
	
	int pos;
}

int main(){
	IN>>n>>m;
	for(int i=0; i<m; i++){
		int a, b, w;
		IN>>a>>b>>w;
		mat[a][b][1]=mat[b][a][2]=1;
		mat[a][b][2]=mat[b][a][2]=w;
	}
	IN>>from>>to;

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<mat[i][j][1]<<'-'<<mat[i][j][2]<<' ';
		} 
		cout<<endl;
	}
	cout<<"FROM: "<<from<<" - TO: "<<to<<"\n\n\n\n";
}
