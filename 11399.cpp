#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int n[1000];
	int N;
	cin>>N;

	for(int i = 0; i<N; i++)
		cin>>n[i];

	sort(n, n+N);

	int sum=0;
	for(int i = 0; i<N; i++){
		int tmp = 0;
		for(int j = 0; j<= i; j++){
			tmp += n[j];
		}
		sum+=tmp;
	}

	cout<<sum;
}
