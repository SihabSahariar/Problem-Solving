#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c;cin>>c;
	while(c--)
	{
		set<int> ms;
		int p;cin>>p;
		for(int i=0;i<p;i++)
		{
			int l;cin>>l;
			ms.insert(l);
		}
		cout<<ms.size()<<endl;
	}
	return 0;
}
