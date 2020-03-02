#include <iostream>
#include <queue>

using namespace std;
int map[301][301];
bool visit[301][301];
int dx[8] = {-2, -2, -1,  1,  2, 2, -1, 1};
int dy[8] = {-1,  1, -2, -2, -1, 1,  2, 2};
int n;
void init(){
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			map[i][j] = 0;
			visit[i][j] = false;
		}
	}
}
int main(){
	int tcase;
	cin>>tcase;
	
		
	while(tcase--){
		queue< pair<int,int> > que;
		cin>>n;
		int x1, y1;
		cin>>x1>>y1; // start
		que.push(make_pair(x1,y1));
		visit[x1][y1] = true;
		
		int cx, cy;
		cin>>cx>>cy; // goal
		
		
		while(!que.empty()){
			int x = que.front().first;
			int y = que.front().second;
			if(x == cx && y == cy) {
				cout<<map[x][y]<<'\n';
				break;
			}
			que.pop();

			for(int i = 0; i<8; i++){
				int nx = dx[i] + x;
				int ny = dy[i] + y;

				if(nx<0 || ny<0 || nx>=n || ny>=n) continue;
				if(!visit[nx][ny]){
					visit[nx][ny] = true;
					que.push(make_pair(nx,ny));
					map[nx][ny] = map[x][y] + 1;
				}
			}
			
		}
		init();
	}
}
