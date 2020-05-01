#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int tcase;
	cin>>tcase;
	int val = 0;
	string a;
	int tmp;
	while(tcase--){
		cin>>a;

		if(a=="add"){
			cin>>tmp;
			val = val | (1<<tmp);
		}
		else if(a=="check"){
			cin>>tmp;
			if((val>>tmp)&1) cout<<1<<'\n';
			else cout<<0<<'\n';
		}
		else if(a=="remove"){
			cin>>tmp;
			val = val & ~(1<<tmp);
		}
		else if(a=="toggle"){
			cin>>tmp;
			val = val ^ (1<<tmp);
		}
		else if(a=="all"){
			val = (1<<21) -1;
		}
		else if(a=="empty"){
			val = 0;
		}

	}


}
