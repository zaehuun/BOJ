#include <iostream>
using namespace std;

int main(){
	int arr[9];
	int sum = 0;
	for(int i = 0; i<9; i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	
	for(int i = 0; i<9; i++){
		bool flag = false;
		for(int j =0; j<9; j++){
			if(i!=j&&sum-arr[i]-arr[j] == 100){
				arr[i] = arr[j] = 0;
				flag = true;
				break;	
			}
		}
		if(flag) break;
	}

	for(int i = 0; i<9; i++){
		if(arr[i]!=0)
			cout<<arr[i]<<'\n';
	}
}
