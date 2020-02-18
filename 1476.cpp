#include <iostream>

using namespace std;

int main(){

	int e, s, m;

	cin>>e>>s>>m;

	int a, b, c;
	a = 1;
	b = 1;
	c = 1;
	int year = 1;
	while(1){
		if( (e==a) && (s==b) && (m==c) ) break;
		a++;
		b++;
		c++;
		if(a>15) a = 1;
		if(b>28) b = 1;
		if(c>19) c = 1;
		year++;
	}
	cout<<year;
}
