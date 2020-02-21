#include <iostream>
using namespace std;

int map[300];
int dp[300];

int main(){
	int n;
	cin>>n;

	for(int i = 0; i<n; i++)
		cin>>map[i];

	dp[0] = map[0];
	dp[1] = max(map[0]+map[1], map[1]);
	dp[2] = max(map[0]+map[2], map[1]+map[2]);

	for(int i = 3; i<n; i++){
		dp[i] = max(dp[i-1]+map[i],dp[i:
		
