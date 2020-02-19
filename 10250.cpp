#include <iostream>
using namespace std;

int main(){
	int tcase;
	cin>>tcase;
	for(int i = 0; i<tcase; i++){
		int H, W, N;
		cin>>H>>W>>N;

		int row = N % H;
		if(!row) row = H;
		int col = N / H + 1;
		if(!(N%H)) col -= 1;
		if(col>=10)
			cout<<row<<col<<'\n';
		else
			cout<<row<<0<<col<<'\n';
	}
}

