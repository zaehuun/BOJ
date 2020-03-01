#include <iostream>
#include <vector>
#include <algorithm>
int map[101][101];
bool visit[101][101];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int size;
int m, n;
using namespace std;

void dfs(int x,int y){
	size++;
	for(int i = 0; i<4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];

		if(nx<0 || ny<0 || nx>=m || ny>=n) continue;
		if(map[nx][ny] == 0 && !visit[nx][ny]){
			visit[nx][ny] = true;
			dfs(nx,ny);
		}
			//tmp++;
	}
	//cout<<tmp;
}
int main(){

	int k;

	cin>>m>>n>>k;

	for(int i = 0; i<k; i++){
		int x1, y1, x2, y2;
		cin>>x1>>y1>>x2>>y2;

		for(int y = y1; y<y2; y++){
			for(int x= x1; x<x2; x++)
				map[y][x]=1;
		}
	}
	
	vector<int> vec;
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			if(map[i][j]==0 && !visit[i][j]){
				size = 0;
				visit[i][j] = true;
				dfs(i,j);
				vec.push_back(size);
				
			}
		}
	}

	sort(vec.begin(), vec.end());

	cout<<vec.size()<<'\n';

	for(int i = 0; i<vec.size(); i++)
		cout<<vec[i]<<' ';
}
