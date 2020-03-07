#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> st;

int cnt;

int main(){
	string n;
	cin>>n;

	for(int i = 0; i<n.length(); i++){
		if(n[i] == '(') st.push(n[i]);

		else{
			st.pop();
			if(n[i-1] == '(')
				cnt+=st.size();
			else
				cnt+=1;
		}
	}
	cout<<cnt;
}
