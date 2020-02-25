#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
int nx[4] = {1,-1,0,0};
int ny[4] = {0,0,1,-1};
char map[21][21];
bool visit[26];
int r,c;
int result;
int tmp;
void dfs(int x, int y, int cnt){
	result = max(result,cnt);
	for(int i = 0; i<4; i++){
		int cx = x + nx[i];
		int cy = y + ny[i];

		if(cx<0 || cy<0 || cx>=r || cy>=c) continue;
		
		if(!visit[map[cx][cy]-65]){
			visit[map[cx][cy]-65] = true;
			dfs(cx,cy,cnt+1);	
			visit[map[cx][cy]-65] = false;
		}	

	}

}
int main(){
	cin>>r>>c;

	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++)
			cin>>map[i][j];
	}
	visit[map[0][0]-65] = true;
	dfs(0,0,1);
	
	cout<<result;
}
