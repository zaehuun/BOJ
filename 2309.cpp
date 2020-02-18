#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int key[9];
	int sum = 0;
	for(int i = 0; i<9; i++){
		cin>>key[i];
		sum+=key[i];
	}
	sort(key,key+9);
	int one;
	int two;
	bool flag = false;
	for(int i = 0; i<9; i++){
		for(int j = 0; j<9; j++){
			if(sum-key[i]-key[j] == 100)	{
				one = i;
				two = j;
				flag = true;
				break;
			}
		}
		if(flag) break;
	}
	for(int i = 0; i<9; i++){
		if((i==one) || (i==two) ){
		}
		else
			cout<<key[i]<<'\n';
	}
}	
