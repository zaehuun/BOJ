#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check( pair<int,int> a, pair<int,int> b){
	if(a.first == b. first) return a.second<b.second;
	return a.first<b.first;
}

int main(){
	int n;
	cin>>n;

	vector< pair<int,int> > vec;

	for(int i = 0; i<n; i++){
		int a,b;
		cin>>a>>b;
		vec.push_back(make_pair(a,b));
	}

	sort(vec.begin(), vec.end(), check);

	for(int i = 0; i<n; i++){
		cout<<vec[i].first<<' '<<vec[i].second<<'\n';
	}
}
