#include <iostream>
using namespace std;

int main(){
	long long arr[100];
	int n;
	cin>>n;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 2;
	while(n--){
		int val;
		cin>>val;
		for(int i = 6; i<=val; i++){
			arr[i] = arr[i-2] + arr[i-3];
		}
		cout<<arr[val];
	}
}
		
