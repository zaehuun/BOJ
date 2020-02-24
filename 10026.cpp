#include <iostream>
#include <cstdio>
using namespace std;
int count1;
int count2;
int n;
int tx[4] = {1,-1,0,0};
int ty[4] = {0,0,1,-1};
char map[100][100];
bool visit[100][100];
void rgb(int x, int y, char c){
	if(x<0 || y<0 || x>=n || y>=n) return;
	else{
		visit[x][y] = true;
		for(int i = 0; i<4; i++){
			int nx = x + tx[i];
			int ny = y + ty[i];
			if(nx>=0 && ny>=0 && nx<n && ny<n && map[nx][ny] == c &&			 !visit[nx][ny])
				rgb(nx,ny,c);
		}
	}

}
void color(){
	
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				if(!visit[i][j]){
					if(map[i][j]== 'R') rgb(i,j,'R');
					else if(map[i][j]=='G') rgb(i,j,'G');						else if(map[i][j]=='B') rgb(i,j,'B');
					count1++;
				}	
			}
		}
	
		for(int i = 0; i<n; i++){
			for(int j = 0; j<n; j++){
				visit[i][j] = false;
				if(map[i][j]=='G') map[i][j] = 'R';
			}
		}
		 for(int i = 0; i<n; i++){
                        for(int j = 0; j<n; j++){
                                if(!visit[i][j]){
                                        if(map[i][j]== 'R') rgb(i,j,'R');
					else if(map[i][j]=='B') rgb(i,j,'B');
                                        count2++;
                                }
                        }
                }
	
}
int main(){
	cin>>n;
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++)
			cin>>map[i][j];
	}
	color();
	cout<<count1<<' '<<count2;
}	
