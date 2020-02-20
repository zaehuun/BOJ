#include <iostream>
#include <queue>
using namespace std;
bool visit[100001];
int main(){
	int N, K;
	cin>>N>>K;

	queue< pair<int,int> > que;
	
	que.push(make_pair(N,0));
	visit[N] = true;
	while(!que.empty()){
		int pwd = que.front().first;
		int scd = que.front().second;
		que.pop();

		if(pwd==K){
			cout<<scd;
			break;
		}

		if(pwd+1<=100000 && !visit[pwd+1]){
			que.push(make_pair(pwd+1,scd+1));
			visit[pwd+1]= true;
		}
		if(pwd-1>=0 && !visit[pwd-1]){
                        que.push(make_pair(pwd-1,scd+1));
                        visit[pwd-1]=true;
                }
		if(pwd*2<=100000 && !visit[pwd*2]){
                        que.push(make_pair(pwd*2,scd+1));
                        visit[pwd*2]=true;
                }
	}
	
}
	
