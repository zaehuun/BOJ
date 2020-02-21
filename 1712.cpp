#include <iostream>
using namespace std;

int main(){
	long long A;
	long long B;
	long long C;
	
	cin>>A>>B>>C;

	if(B>C){ cout<<-1; return 0;}
	/*while(1){
		if(A + B * result < C *result) break;
		result++;
	}*/ //time over message;

	long long result = A/(C-B) +1;
	cout<<result;
}
