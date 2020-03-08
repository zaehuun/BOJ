#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){

	return a.first > b.first;
}
int main(){

	vector< pair<int,int> > vec;

	for(int i = 1; i<=8; i++){
		int score;
		cin>>score;
		vec.push_back(make_pair(score,i));
	}

	sort(vec.begin(), vec.end(), cmp);
	int sum = 0;
	for(int	i = 0; i<5; i++)
		sum+=vec[i].first;
	cout<<sum<<'\n';

	vector<int> idx;

	for(int i = 0; i<5; i++)
		idx.push_back(vec[i].second);

	sort(idx.begin(), idx.end());

	for(int i = 0; i<5; i++)
		cout<<idx[i]<<' ';
}
	
