#include <iostream>
#include <queue>
using namespace std;
int dy[4] = {1,-1,0,0};
int dx[4] = {0,0,1,-1};
int visit[1000][1000];
int main(){
	int map[1000][1000];
	int m; int n;
	cin>>m>>n;
	queue< pair<int,int> > que;

	
	int count = 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin>>map[i][j];
			if(map[i][j] == 1){
				que.push(make_pair(i,j));
				count++;
				visit[i][j]++;
			}
		}
	}
	
	if(count == m*n) {cout<<0; return 0;}
	while(que.empty() == false){
//		cout<<"---------------\n";
		int x = que.front().first;
		int y = que.front().second;
		que.pop();
		for(int i = 0; i<4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx<0 || ny<0 || nx>=n || ny>= m || visit[nx][ny]
			  || map[nx][ny] != 0 ) continue;
			visit[nx][ny] = visit[x][y] + 1;
			map[nx][ny] = 1;
			que.push(make_pair(nx,ny));
//			cout<<nx<<','<<ny<<'\n';
		}
	
	}	
	int result = 0;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			if(map[i][j] == 0){
				cout<<-1;
				return 0;
			}
			if(result < visit[i][j])
				result = visit[i][j];
			//cout<<visit[i][j];
		}
		//cout<<endl;
	}
	cout<<result-1;
}
