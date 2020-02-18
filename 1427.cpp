#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
bool desc(int a, int b){ return a > b; }

int main(){
	char arr[1000];
	cin>>arr;

	sort(arr,arr+strlen(arr), desc);

	for(int i = 0; i<strlen(arr); i++)
		cout<<arr[i];
}
