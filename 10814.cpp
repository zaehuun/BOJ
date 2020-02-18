#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool cmp(pair<int, string> a, pair<int, string> b)

{

        if (a.first < b.first)

                 return true;

        //나이가 같을 경우에도 따로 처리

        else if (a.first == b.first)

                 return false;

        return false;

}


int main(){
	int n;
	cin>>n;

	vector< pair<int, string> > vec;

	for(int i = 0; i<n; i++){
		int age;
		string name;
		cin>>age>>name;
		vec.push_back(make_pair(age,name));
	}

	stable_sort(vec.begin(), vec.end(),cmp);

	for(int i = 0; i<n; i++)
		cout<<vec[i].first<<' '<<vec[i].second<<'\n';
}
