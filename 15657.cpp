#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec;
vector<int> vec1;
int n,m;
void solve(int cnt){
	if(cnt==m){
		for(int i = 0; i<m-1; i++){
			if(vec1[i]>vec1[i+1]) return;
		}
		for(int i = 0; i<m; i++)
			cout<<vec1[i]<<' ';
		cout<<'\n';
	}

	else{
		for(int i = 0; i<n; i++){
				vec1.push_back(vec[i]);
				solve(cnt+1);
				vec1.pop_back();
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
