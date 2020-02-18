#include <iostream>

using namespace std;

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}
int lcm(int a, int b){
	int g = gcd(a,b);
	return g*(a/g)*(b/g);
}

int main(){
	int a;
	int b;
	int n;
	cin>> n;
	for(int i = 0; i<n; i++){

		cin>>a>>b;
		cout<<lcm(a,b)<<'\n';
	}

}
