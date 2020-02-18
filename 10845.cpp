#include <iostream>
#include <queue>
using namespace std;

int main(){
	queue<int> que;
	
	int n;
	cin>>n;

	for(int i = 0; i<n; i++){
		string com;
		cin>>com;
		if(com=="push"){	
			int val; cin>>val;
			que.push(val);
		}
		else if(com=="front"){
			if(que.empty()) cout<<-1<<'\n';
			else cout<<que.front()<<'\n';
		}
		else if(com=="back"){
			if(que.empty()) cout<<-1<<'\n';
			else cout<<que.back()<<'\n';
		}
		else if(com=="size"){
			cout<<que.size()<<'\n';
		}
		else if(com=="empty"){
			cout<<que.empty()<<'\n';
		}
		else if(com=="pop"){
			if(que.empty()) cout<<-1<<'\n';
			else{
				cout<<que.front()<<'\n';
				que.pop();
			}
		}
	}
}
