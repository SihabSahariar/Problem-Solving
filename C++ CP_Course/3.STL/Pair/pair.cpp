#include<bits/stdc++.h>
using namespace std;
int main()
{
	int id= 20101402;
	string name = "sizan";

	pair<int,string>p;
	p = {20101402,"sizan"};
	cout<<p.first<<" "<<p.second<<endl<<endl;

	vector<pair<int,string>>list;

	for(int i=0;i<5;i++){
		int id;string name;
		cin>>id>>name;
		list.push_back(make_pair(id,name));
	}


	for(int i=0;i<5;i++){
		cout<<"NAME : "<<list[i].second<<" ID: "<<list[i].first<<endl;

	}
}