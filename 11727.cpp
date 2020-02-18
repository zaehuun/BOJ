#include<iostream>
#include <vector>
using namespace std;

int main(){
	int a[1000];

	int n;
	cin>>n;

	a[1] = 1;
	a[2] = 3;
	for(int i = 3; i<=n; i++)
		a[i] = (a[i-1] + a[i-2] * 2) % 10007;

	cout<<a[n];
}
