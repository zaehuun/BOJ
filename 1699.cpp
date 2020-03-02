#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int dp[100000];

int main(){

	int n;
	cin>>n;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	for(int i = 4; i<=n; i++){
		dp[i] = i;
		for(int j = 1; j*j<=i; j++){
			dp[i] = min(dp[i],dp[i-j*j] + 1);

		} 
	}

	cout<<dp[n];
}
