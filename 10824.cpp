#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(){
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	string sum1 = a+b;
	string sum2 = c+d;

	long long ans1 = atoll(sum1.c_str());
	long long ans2 = atoll(sum2.c_str());
	
	cout<<ans1+ans2;
}
