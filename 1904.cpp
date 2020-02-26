#include <iostream>
using namespace std;

int dp[1000000];

int main(){
	int n;
	cin>>n;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	dp[4] = 5;

	for(int i = 5; i<=n; i++)
		dp[i] = (dp[i-1] + dp[i-2]) % 15746;
		
	cout<<dp[n];
}
