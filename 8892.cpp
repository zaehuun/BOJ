#include <iostream>
#include <stack>
#include <string>

using namespace std;
bool test(string text){
	int len = text.length()/2;
	int size = text.length();
	bool result = true;
	for(int i = 0; i<len; i++){
		if(text[i] != text[size-1-i]){
			result = false;
			break;	
		}		
	}

	return result;

}
int main(){
	int tcase;
	cin>>tcase;

	while(tcase--){
		int n;
		cin>>n;
		string arr_st[100];
		bool flag = false;
		for(int i = 0; i<n; i++)
			cin>>arr_st[i];
			
		for(int i = 0; i<n; i++){
			bool stop = false;
			for(int j = 0; j<n; j++){
				if(i!=j){
					if(test(arr_st[i]+arr_st[j])){
						flag = true;
						cout<<arr_st[i]+arr_st[j]<<'\n';
						stop = true;
						break;
					}
				}
			}
			if(stop) break;
		}
		if(!flag)
			cout<<0<<'\n';
	}
}
