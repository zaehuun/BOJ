#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;
vector<int> vec1;
bool visit[9];
int n,m;
void solve(int cnt){
	if(cnt==m){
		for(int i = 0; i<m; i++)
			cout<<vec1[i]<<' ';
		cout<<'\n';
	}

	else{
		for(int i = 0; i<n; i++){
			if(!visit[i]){
				vec1.push_back(vec[i]);
				visit[i] = true;
				solve(cnt+1);
				vec1.pop_back();
				visit[i] = false;
			}
		}
	}
}
int main(){
	cin>>n>>m;

	for(int i = 0; i<n; i++){
		int var;
		cin>>var;
		vec.push_back(var);
	}
	sort(vec.begin(),vec.end());
	solve(0);
}
