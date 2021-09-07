#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,k;cin>>t>>k;
   int arra[t];
   for(int i=0;i<t;i++)
	cin>>arra[i];

	int count=0;
	for(int j=0;j<t;j++)
	{
		if(arra[j]>=arra[k-1] && arra[j]!=0)
			count++;
	}
	cout<<count<<endl;
   
   return 0;
}