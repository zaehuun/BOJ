#include <iostream>
using namespace std;
int count[12];


int solve(int n){
	count[1] = 1;
	count[2] = 2;
	count[3] = 4;
	for(int i = 4; i<=n; i++)
		count[i] = count[i-1] + count[i-2] + count[i-3];
	return count[n];
}

int main(){
	int test_num;
	cin>> test_num;

	for(int i = 0; i<test_num; i++){
		int n;
		cin>>n;
		cout<<solve(n);
	}
}
