#include <iostream>
#include <algorithm>
using namespace std;
int roll[1000];
int ll[1000];
int main(){
	int l;
	cin>>l;

	int n;
	cin>>n;
	int max = 0;
	int idx;
	for(int i = 1; i<=n; i++){
		int x,y;
		cin>>x>>y;
		for(int st = x; st<=y; st++){
			if(roll[st]!=0) continue;
			roll[st] = i;
		}
		if(y-x+1 > max){
			max = y-x+1;
			idx = i;
		}
	}
	cout<<idx<<'\n';
	max = 0;
	idx = 0;
	
	for(int i = 1; i<=n; i++){
		for(int st = 1; st<=l; st++){
			if(roll[st] == i)
				ll[i]++;
		}
	}
	
	for(int i = 1; i<= n; i++){
		if(ll[i] > max){
			max = ll[i];
			idx = i;
		}
	}
	cout<<idx<<'\n';
}
			
