#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;
int n;
int m;
int visit[1000][1000];
bool isvalidloc(int r, int c, int map[1000][1000]) {
	if (r<1 || c<1 || r>n || c>m || (visit[r][c]==true) || map[r][c] == 0)
		return false;
	else
		return map[r][c] == 1  || visit[r][c] == false;
}
int main(){
	
	int map[1000][1000];
	queue< pair<int,int> > que;
	cin>>n>>m;

	for(int i = 1; i<=n; i++){
		for(int j = 1; j<=m; j++){
			scanf("%1d",&map[i][j]);
		}
	}

	que.push(make_pair(1,1));
	visit[1][1] = true;
	while(que.empty() == false){
		pair<int,int> tmp = que.front(); que.pop();
		int x = tmp.first;
		int y = tmp.second;
		if(tmp.first==n && tmp.second==m) break;

		else{
			if(isvalidloc(tmp.first-1, tmp.second,map)){
				 que.push(make_pair(tmp.first-1, tmp.second));
				visit[tmp.first-1][tmp.second] = visit[x][y] +1;
			}
			if(isvalidloc(tmp.first+1, tmp.second,map)){
				que.push(make_pair(tmp.first+1,tmp.second));
				visit[tmp.first+1][tmp.second] = visit[x][y] +1;
			}
			if(isvalidloc(tmp.first,tmp.second+1,map)){
				que.push(make_pair(tmp.first, tmp.second+1));
				visit[tmp.first][tmp.second+1] = visit[x][y]+1;
			}
			if(isvalidloc(tmp.first,tmp.second-1,map)){
				que.push(make_pair(tmp.first, tmp.second-1));
				visit[tmp.first][tmp.second-1] = visit[x][y]+1;
			}
		}
	}

	cout<<visit[n][m];
}
