#include <iostream>
#include <vector>

using namespace std;
vector<int> vec;
bool visit[9];
int n,m;
void solve(int cnt){
	if(cnt==m){
		for(int i = 0; i<m-1; i++){
			if(vec[i]>vec[i+1])
				return;
		}

		for(int i = 0; i<m; i++){
			cout<<vec[i]<<' ';
		}
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
