#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
int n,m;
int map[9][9];
bool visit[9][9];
int result;
void dfs(){
	int tmp[9][9];
	stack< pair<int, int> > st;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			tmp[i][j] = map[i][j];
			if(tmp[i][j] == 2)
				st.push(make_pair(i,j));
		}
	}

	while(!st.empty()){
		int x = st.top().first;
		int y = st.top().second;
		st.pop();

		for(int i = 0; i<4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx<0 || ny<0 || nx>=n || ny>=m) continue;
			if(tmp[nx][ny] == 0){
				tmp[nx][ny] = 2;
				st.push(make_pair(nx,ny));
			}
		}
	}
	int cnt = 0;
	for(int i = 0; i<n; i++)
		for(int j = 0; j<m; j++)
			if(tmp[i][j] == 0)
				cnt++;
	result = max(cnt,result);
}
	
void solve(int wall){
	if(wall==3){
		dfs();
	}

	else{
		for(int i = 0; i<n; i++){
			for(int j = 0; j<m; j++){
				if(map[i][j]==0 && !visit[i][j]){
					map[i][j] = 1;
					visit[i][j] = true;
					solve(wall+1);
					map[i][j] = 0;
					visit[i][j] = false;
				}
			}
		}
	}
}

int main(){
	cin>>n>>m;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++)
			cin>>map[i][j];
	}

	solve(0);
	cout<<result;
}
