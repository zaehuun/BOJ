#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
using namespace std;


bool visit[9];

set<string> st;
vector<int> vec;
vector<int> vec1;
int n,m;
void solve(int cnt){
	if(cnt==m){
		string tmp = "";
		for(int i = 0; i<m; i++){
			char a = vec1[i] + '0';
			tmp = tmp + a;
		}
		if(st.find(tmp) == st.end()){
			st.insert(tmp);
			for(int i = 0; i<m-1; i++){
				if(vec1[i] > vec1[i+1]) return;
			}
			for(int i = 0; i<m; i++)
				cout<<vec1[i]<<' ';
			cout<<'\n';
		}

		else return;
	}

	else{
		for(int i = 0; i<n; i++){
			if(!visit[i]){
				visit[i] = true;
				vec1.push_back(vec[i]);
				solve(cnt+1);
				visit[i] = false;
				vec1.pop_back();
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
