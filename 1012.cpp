#include <iostream>
using namespace std;
int map[50][50];
bool visit[50][50];
int nx[4] = {1,-1,0,0};
int ny[4] = {0,0,1,-1};

void dfs(int x, int y, int mrow, int mcol){
	visit[x][y] = true;
	
	for(int i = 0; i<4; i++){
		int row = x + nx[i];
		int col = y + ny[i];
		if(row<0 || col<0 || row>=mrow || col>=mcol) continue;
		else{
			if(map[row][col]==1 && visit[row][col] == false)
				dfs(row,col,mrow,mcol);
		}
	}
}
void init(){
	for(int i = 0; i<50; i++){
		for(int j = 0; j<50; j++){
			map[i][j] = 0;
			visit[i][j] = false;
		}
	}
}

int main(){
	int tcase;
	cin>>tcase;
	
	for(int i = 0; i<tcase; i++){
		int x, y, n;
		cin>>x>>y>>n;
		int cnt = 0;
		for(int j = 0; j<n; j++){
			int x1, y1;
			cin>>x1>>y1;
			if(x1>=0 && y1>=0 && x1<x && y1<y)
				map[x1][y1] = 1;
		}

		for(int a = 0; a<x; a++){
			for(int b = 0; b<y; b++){
				if(map[a][b] == 1&&(visit[a][b]==false)){
					dfs(a,b,x,y);
					cnt++;
				}
			}
		}
		cout<<cnt<<'\n';
		init();
	}
}
	
		
		
