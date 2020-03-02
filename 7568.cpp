#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin>>n;

	vector< pair<int, int> > vec;

	for(int i = 0; i<n; i++){
		int x, y;
		cin>>x>>y;

		vec.push_back(make_pair(x,y));
	}

	for(int i = 0; i<n; i++){
		int cnt = 0;
		for(int j = 0; j<n; j++){
			if(vec[i].first<vec[j].first && 
			vec[i].second < vec[j].second)
				cnt++;
		}
		cout<<cnt+1<<'\n';
	}
}
