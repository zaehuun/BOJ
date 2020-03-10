#include <iostream>
#include <vector>

using namespace std;
vector<int> vec;
bool visit[9];
int n,m;
void solve(int cnt){
	if(cnt==m){
		for(int i = 0; i<m; i++)
			cout<<vec[i]<<' ';
		cout<<'\n';

	}

	else{
		for(int i = 1; i<=n; i++){
				vec.push_back(i);
				solve(cnt+1);
				vec.pop_back();
		
		}
	}
}
int main(){
	cin>>n>>m;

	solve(0);
}
