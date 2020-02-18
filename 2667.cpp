#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;

bool visited[25][25];
int map[25][25];
int count1[25*25];

void labeling(int i, int j, int label, int num){
	if(i<0||j<0||i>=num||j>=num) return;
	else if(map[i][j] ==1 && visited[i][j] == false){
		map[i][j] = label;
		visited[i][j] = true;
		labeling(i-1, j, label,num);
		labeling(i+1, j, label,num);
		labeling(i, j-1, label,num);
		labeling(i, j+1, label,num);
	}
}
	

void find(int num){
	int label = 0;
	for(int i = 0; i<num; i++){
		for(int j = 0; j<num; j++){
			if(map[i][j] == 1 && visited[i][j] == false)
				labeling(i,j,++label,num);
		}
	}

	cout<< label<<endl;
	for(int i = 0; i<num; i++){
		for(int j = 0; j<num; j++){
			if(map[i][j]!=0){
				count1[map[i][j]]++;
			}
		}
	}
	sort(count1 + 1, count1 + label + 1);
	for(int i = 1; i<=label; i++)
		cout<<count1[i]<<endl;
	
}


int main(){
	int num;
	cin>>num;

	for(int i = 0; i<num; i++){
		for(int j = 0; j<num; j++)
			scanf("%1d",&map[i][j]);
	}
	find(num);
}
