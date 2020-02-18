#include <iostream>
#include <queue>
using namespace std;
int main(){
	string str;
	cin>>str;

	queue<char> que;
	int count = 0;
	for(int i = 0; i<str.length(); i++)
		que.push(str[i]);

	while(que.empty()== false){
		char a = que.front(); que.pop();
		//if( que.size() == 1){ count++; break;}
		 if(a= 'c'&& (que.front() =='=' || que.front()=='-')){
			que.pop();
			count++;
		}
		else if(a = 'd' && que.front() == '-'){
			que.pop();
			count++;
		}

		else if(a = 'd' && que.front() == 'z'){
			que.pop();
			cout<<'a';
			if(que.front()!='='){cout<<'b'; count+=2;}
			else count++;

		}
		else if(a = 'l'&& que.front() == 'j'){
			que.pop();
			count++;
		}
		else if(a='n'&&que.front() == 'j'){
			que.pop();
			count++;
		}
		else if(a='s' && que.front() == '='){
			que.pop();
			count++;
		}
		else if(a = 'z' && que.front() == '='){
			que.pop();
			count++;
		}
		else{
			cout<<'c';
			count++;
		}
	}
	cout<<count;
}
