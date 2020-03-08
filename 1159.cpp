#include <iostream>
#include <string>

using namespace std;
int alpha[26];

int main(){
	int n;
	cin>>n;

	for(int i = 0; i<n; i++){
		string name;
		cin>>name;
		alpha[ name[0] - 'a' ]++;
	}

	bool flag = false;
		
	for(int i = 0; i<26; i++){
		if(alpha[i]>=5){
			char c = i + 'a';
			cout<<c;
			flag = true;
		}
	}

	if(!flag) cout<<"PREDAJA";
}
