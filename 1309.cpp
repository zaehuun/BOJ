#include <iostream>
using namespace std;

int dp[100000];

int main(){
	int n;
	cin>>n;

	dp[1]= 3;
	dp[2] = 7;
	dp[3] = 17;
	dp[4] = 41;

	for(int i = 5; i<=n; i++)
		dp[i] = (dp[i-1] * 2 + dp[i-2])%9901;

	cout<<dp[n];
}
