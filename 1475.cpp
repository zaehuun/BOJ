#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int arr[10];
int main(){

	string num;
	cin>>num;
	
	for(int i = 0; i<num.length(); i++){
		if(num[i]-'0'==9) arr[6]++;
		else arr[num[i] - '0']++;
	}
	arr[6] = arr[6] / 2 + arr[6] % 2;
	int max = arr[0];
	for(int i = 1; i<10; i++){
		if(max<arr[i]){
			 max = arr[i];
		}
	}

	cout<<max;
	
}
