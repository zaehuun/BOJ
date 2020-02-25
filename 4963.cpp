#include <iostream>

using namespace std;

int dx[8] = {1,-1,0,0,1,1,-1,-1};
int dy[8] = {0,0,1,-1,1,-1,1,-1};
int map[50][50];
bool visit[50][50];
int w,h;
void dfs(int x, int y){
	
	for(int i = 0; i<8; i++){
		for(int j = 0; j<8; j++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx<0 || ny<0 || nx>=h || ny>=w) continue;
			if(map[nx][ny] && !visit[nx][ny]){
				visit[nx][ny] = true;
				dfs(nx,ny);
			}
		}
	}
}
void init(){
	for(int i = 0; i<h; i++){
		for(int j = 0; j<w; j++){
			map[i][j] = 0;
			visit[i][j] = false;
		}
	}
}
int main(){
	while(cin>>w>>h){
		if(w==0||h==0) return 0;
		
		for(int i = 0; i<h; i++){
			for(int j = 0; j<w; j++)
				cin>>map[i][j];
		}
		int count = 0;
		for(int i = 0; i<h; i++){
			for(int j = 0; j<w; j++){
				if(map[i][j]==1&&!visit[i][j]){
					visit[i][j] = true;
					dfs(i,j);
					count++;
				}
			}
		}
		init();
		cout<<count<<'\n';
	
	}
}
