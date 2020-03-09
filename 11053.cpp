#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];
int arr[1001];
int main(){
	int n;
	cin>>n;
	for(int i = 0; i<n; i++)
		cin>>arr[i];

	for(int i = 0; i<n; i++){
		dp[i] = 1;
		for(int j = 0; j<i; j++){
			if(arr[i] > arr[j]){
				if(dp[i] < dp[j] + 1)
					dp[i] = dp[j] + 1;
			}
		}
	}
	int max1 = dp[0];
	for(int i = 1; i<n; i++)
		max1 = max(max1,dp[i]);
	cout<<max1;
}
