#include <iostream>
#include <vector>
using namespace std;

bool visit[9];
int n,m;
vector<int> vec;
void solve(int cnt){
	if(cnt == m){
		for(int i = 0; i<m; i++)
			cout<<vec[i]<<' ';
		cout<<'\n';
	}
	else{
		for(int i = 1; i<=n; i++){
			if(!visit[i]){
				visit[i] = true;
				vec.push_back(i);
				solve(cnt+1);
				visit[i] = false;
				vec.pop_back();
			}
		}
	}
}
int main(){
	cin>>n>>m;

	solve(0);
}
