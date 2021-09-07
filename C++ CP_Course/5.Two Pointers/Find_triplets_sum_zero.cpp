#include<bits/stdc++.h>
using namespace std;
//
//L - 05: Find all triplets with zero sum 

void find1(int arra[],int s) // O(n^3)
{
	for(int i = 0;i<s;i++)
	{
		for(int j = i+1;j<s;j++){
			for(int k = j+1;k<s;k++)
			{
				if(arra[i]+arra[j]+arra[k]==0){
					cout<<"("<<arra[i]<<","<<arra[j]<<","<<arra[k]<<")"<<endl;
				}
			}	
		}
	}
}


void find2(int arra[],int l) // O(n^2)
{
	for(int i = 0;i<l;i++)
	{
		set<int>s;
		for(int j = i+1;j<l;j++)
		{
			int sum = arra[i]+arra[j];
			if(s.find(-sum)!=s.end())
				cout<<"("<<arra[i]<<","<<arra[j]<<","<<-sum<<")"<<endl;
			else
				s.insert(arra[j]);
		}
	}
}



int main()
{

	int arr[] = {1,0,-1,2,4,-6,6};
	int s = 7;
	find2(arr,s);

}