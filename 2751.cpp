#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> vec;
	int n;
	cin>>n;
	for(int i = 0; i<n; i++){
		int a;
		cin>>a;
		vec.push_back(a);
	}

	sort(vec.begin(), vec.end());

	for(int i = 0; i<n; i++)
		cout<<vec[i]<<'\n';

}
