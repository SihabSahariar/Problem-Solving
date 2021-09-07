#include<bits/stdc++.h>
using namespace std;
void c_p_c()
{
	#ifndef sizan
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
	#endif
}
int main()
{
	//c_p_c();
	int l;
	cin>>l;
	if(l>=1 && l<=1000)
	{
		string nsu;
		cin>>nsu;
		int len=nsu.length();
		//cout<<len;
		int n=0,s=0,u=0;
		for(int i=0;i<len;i++)
		{
			if(nsu[i]=='N') n++;
			if(nsu[i]=='S') s++;
			if(nsu[i]=='U') u++;
		}

		//cout<<n<<" "<<s<<" "<<u;
		int count_nsu=0;
		int op;
		if(n==0 || s==0 || u==0)
			op=0;
		else 
		{
			while(n!=0 && s!=0 && u!=0)
			{
				count_nsu++;
				n--;s--;u--;
			}
			op=count_nsu;
		}
		cout<<count_nsu;
	}
	
	return 0;
}