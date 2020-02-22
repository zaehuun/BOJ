#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	cin>>a;

	int len = a.length();

	cout<<a[0];
	for(int i = 1; i<len; i++){
		if(a[i] == '-')
			cout<<a[i+1];
	}
}
