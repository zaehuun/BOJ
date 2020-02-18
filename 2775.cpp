#include <iostream>

using namespace std;

int main(){
	int tcase;
	cin>>tcase;
	int map[15][15];

	for(int i = 0; i<15; i++){
		map[0][i] = i+1;
		map[i][0] = 1;
	}
	for(int i = 1; i<15; i++){
		for(int j = 1; j<15; j++){
			map[i][j] = map[i-1][j] + map[i][j-1];
		}
	}

	for(int i = 0; i<tcase; i++){
		int k; int n;
		cin>>k>>n;
		cout<<map[k][n-1]<<'\n';
	}
}	
