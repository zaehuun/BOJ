#include <iostream>
#include <vector>
using namespace std;
int t[16];
int p[16];
int main(){
	vector<int> vec;
	int n;
	cin>>n;

	for(int i =1; i<=n; i++){
		cin>>t[i]>>p[i];
	}
	cout<<"hell"<<'\n';
	for(int i = 1; i<=n; i++){
		int max = 0;
		for(int j = i; j<=n;){
			max += p[j];
			j = j + t[j];
			cout<<"12131";
		}
		vec.push_back(max);
	}		
	cout<<"oo"<<'\n';
	int top = vec[0];
	for(int i = 1; i<vec.size(); i++){
		if(top<vec[i]);
			top = vec[i];
	}
	cout<<top;
}
	
