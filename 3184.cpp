#include <iostream>

using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
char map[251][251];
bool visit[251][251];
int tmp_wolf = 0;
int tmp_sheep = 0;
int r,c;
int wolf = 0;
int sheep = 0;
void dfs(int x, int y){
	if(map[x][y]=='v') tmp_wolf++;
	if(map[x][y]=='o') tmp_sheep++;
	visit[x][y] = true;

	for(int i = 0; i<4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx<0 || ny<0 || nx>=r || ny>=c || visit[nx][ny]
			|| map[nx][ny] == '#') continue;
		visit[nx][ny] = true;
		dfs(nx,ny);
		
	}
} 

int main(){
	cin>>r>>c;

	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++)
			cin>>map[i][j];
	}

	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			if(map[i][j] != '#' && !visit[i][j]){
				visit[i][j] = true;
				dfs(i,j);
				if(tmp_wolf>=tmp_sheep)
					wolf+=tmp_wolf;
				else
					sheep+=tmp_sheep;
				tmp_sheep = 0; 
				tmp_wolf = 0;
			}
		}
	}
	cout<<sheep<<' '<<wolf<<'\n';
}
