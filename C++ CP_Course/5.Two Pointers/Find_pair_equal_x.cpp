#include<bits/stdc++.h>
using namespace std;
//Find the pair (x,y) so that x+y = sum
//L - 02: Find the pair whose sum is equal to x 
int main()
{
	int t;cin>>t;
	vector<int>p;
	for(int i=0;i<t;i++){
		int k;cin>>k;
		p.push_back(k);
	}
	sort(p.begin(),p.end());
	for(auto i:p)cout<<i<<" ";
	cout<<endl;
	int sum=0;cin>>sum;

	pair<int,int>db;


	int left = 0, right = t-1;
	while(left<right){
		if(p[left]+p[right]>sum){
			right--;

		}
		else if(p[left]+p[right]<sum){
			left++;
		}
		else{
			db = {p[left],p[right]};
			break;
		}
	}



	printf("(%d,%d)\n",db.first,db.second);
}