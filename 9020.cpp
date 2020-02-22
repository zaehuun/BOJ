#include <iostream>
using namespace std;
bool arr[10000];
int main(){
	
	for(int i = 2; i<10000; i++){
		int flag = 0;
		for(int j = 1; j<=i; j++){
			if( i%j==0)
				flag++;
		}
		if(flag==2)
			arr[i] = true;
	}

	int ncase, val;
	cin>>ncase;

	while(ncase--){
		cin>>val;
		int half = val/2;
		int i,j;
		for(i = j = half; i<=val; i++, j--){
			if(arr[i] && arr[j]){
				cout<<j<<' '<<i<<'\n';
				break;
			}
		}
	}
}
