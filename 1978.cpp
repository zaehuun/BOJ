#include <iostream>
using namespace std;

int main(){
	int arr[100];
	int n;
	cin>>n;

	for(int i = 0; i<n; i++)
		cin>>arr[i];
	int count = 0;
	
	for(int i = 0; i<n; i++){
		int flag = 0;
		for(int j = 1; j<=arr[i]; j++){
			if(arr[i]!=1&&arr[i]%j==0)
				flag++;
		}
		if(flag==2)
			count++;
	}

	cout<<count;
}
		
