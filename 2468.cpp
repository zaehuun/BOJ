#include <iostream>
#include <algorithm>
using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int map[101][101];
bool visit[101][101];
int n;
void dfs(int x, int y,int h){
	visit[x][y] = true;

	for(int i = 0; i<4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
	
		if(nx<0 || ny<0 || ny>=n || nx>=n) continue;
		if(map[nx][ny]>h && !visit[nx][ny]){
			dfs(nx,ny,h);
		}
	}
}
void init(){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++)
			visit[i][j] = false;
	}
}
int main(){
	cin>>n;
	int max_height = 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			cin>>map[i][j];
			max_height = max(max_height,map[i][j]);	
		}
	}
	int result = 1;
	for(int height = 1; height<=max_height; height++){
		init();
		int count = 0;
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				if(map[i][j]>height && !visit[i][j]){
					visit[i][j] = true;
					dfs(i,j,height);
					count++;
				}
			}
		}
		result = max(result,count);
	}	
	cout<<result;
}
