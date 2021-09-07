#include<bits/stdc++.h>
using namespace std;
//Find the pair (x,y) so that x+y near to sum
//L - 03: Find the pair in Array Whose sum is closest to X 
int main()
{
	int t;cin>>t;
	vector<int>list;
	for(int i=0;i<t;i++){
		int val;cin>>val;
		list.push_back(val);
	}
	sort(list.begin(),list.end());
	int sum=0;cin>>sum;



	int l=0,r=t-1;
	int ind1,ind2;
	int diff = INT_MAX;
	while(l<r){
		int res = list[l]+list[r];

		if(abs(sum-res)<diff){
			ind1 = l;
			ind2 = r;
			diff = abs(sum-res);

		}
		else if(res>sum)r--;
		else l++;
	}

	cout<<"("<<list[ind1]<<","<<list[ind2]<<") -> "<<list[ind1]+list[ind2]<<endl;


return 0;
}

