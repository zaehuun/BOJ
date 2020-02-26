#include <iostream>
using namespace std;

bool room[101];

int main(){
	int tcase;
	cin>>tcase;

	while(tcase--){
		int n;
		cin>>n;
		for(int i = 1; i<=n; i++){
			for(int j = 1; j<=n; j++){
				if(j%i==0){ 
					room[j] = !room[j];
				}
			}
		}

		int count = 0;
		for(int i = 1; i<=n; i++){
			if(room[i] == true) count++;
		}
		cout<<count<<'\n';

		for(int i = 1; i<=n; i++)
			room[i] = false;
	}
}
				
