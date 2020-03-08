#include <iostream>
#include <set>
#include <string>
using namespace std;


int main(){
	set<string> s;
	int n;
	cin>>n;

	for(int i = 0; i<n; i++){
		string a,b;
		cin>>a>>b;
		if(b=="enter")
			s.insert(a);
		else if(b == "leave")
			s.erase(a);
	}
	set<string>::const_iterator iter;
	for(iter = s.rbegin(); iter != s.rend(); iter++)
		cout<<*iter<<'\n';
}
