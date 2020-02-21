#include <iostream>
using namespace std;
int top=0;
int main(){
	for(int i = 0; i<4; i++){
		int output, input;
		cin>>output>>input;

		if(top<top+input-output)
			top = top + input - output;
	}

	cout<<top;
}
