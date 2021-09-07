#include<bits/stdc++.h>
using namespace std;
int main1(){
	map<int,string>s;
	s.insert({1,"SIZAN"});
	s.insert({2,"RAKIB"});
	cout<<s[2]<<endl;
	return 0;
}

int main()
{
	map<string,double> cgpa;
	cgpa["SIZAN"] = 3.85;
	cgpa["MIZAN"] = 3.25;
	cgpa["TIZAN"] = 3.65;
	cgpa["RAKIB"] = 3.34;
	cgpa["HASAN"] = 3.22;
	//cout<<mp["SIZAN"];


	for(auto i = cgpa.begin();i!=cgpa.end();i++){
		cout<<"NAME = "<<i->first<<" CGPA = "<<i->second<<endl;
	}
	cout<<cgpa.empty()<<endl;
	cout<<cgpa.size()<<endl;
	cgpa.clear();
	cout<<cgpa.size()<<endl;



	map<string,int> test;
	auto it = test.begin();
	for(int i=0;i<2;i++){
		string str;int val;
		cin>>str>>val;
		test[str] = val;
	}

	for(auto i:test)
		cout<<i.first<<" "<<i.second<<endl;

}