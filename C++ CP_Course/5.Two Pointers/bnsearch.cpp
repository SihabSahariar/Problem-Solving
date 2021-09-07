#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	vector<int>list;
	for(int i=0;i<t;i++){
		int val;cin>>val;
		list.push_back(val);
	}
	int key;cin>>key;
	sort(list.begin(),list.end());


	//Binary Search Implementation
	int left = 0,right=t-1;
	bool flag = false; 
	while(left<=right){
	    int mid = left+(right-left)/2;
		if(key==list[mid]){
			flag  = true;
			break;
		}
		else if(key>list[mid]){
			left = mid+1;
		}
		else if(key<list[mid]){
			right = mid-1;
		}

	}

	if(flag)cout<<"FOUND"<<endl;
	else cout<<"NOT FOUND"<<endl;


}