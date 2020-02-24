#include <iostream>
#include <stack>
using namespace std;
char map[101][101];
bool visit[101][101];
stack< pair<int,int> > st;
int m,n;
int nx[8] = {1,-1,0,0,-1,-1,1,1};
int ny[8] = {0,0,1,-1,-1,1,-1,1};
void dfs(int x, int y){
	st.push(make_pair(x,y));
	visit[x][y] = true;
	while(!st.empty()){
                        int x = st.top().first;
                        int y = st.top().second;
                        st.pop();

                        visit[x][y] = true;
                        for(int i = 0; i<8; i++){
                                int cx = x + nx[i];
                                int cy = y + ny[i];

                                if(cx>-1 && cy>-1 && cx<m && cy<n &&                                              map[cx][cy] == '@' && !visit[cx][cy]){
                                        st.push(make_pair(cx,cy));
					visit[cx][cy] = true;
                                }
                        }
                }
}
void init(){
	for(int i = 0; i<m; i++){
		for(int j = 0; j<n; j++){
			visit[i][j] = false;
		}
	}
}
int main(){
	int count = 0;
	while(1){
		cin>>m>>n;
	
		if(!m) return 0;

		for(int i = 0; i<m; i++){
			for(int j = 0; j<n; j++){
				cin>>map[i][j];
			}
		}
		for(int i = 0; i<m; i++){
			for(int j = 0; j<n; j++){
				if(map[i][j]=='@' && !visit[i][j]){
					dfs(i,j);
					count++;
				}
			}
		}
		init();
		cout<<count<<'\n';
		count = 0;
	}
}
