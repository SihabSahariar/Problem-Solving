#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;cin>>t;
	while(t--)
	{
		int x, z,count=0;
		scanf("%d %d",&x,&z);
		for (int i = 2; i * i <= x; ++i)
		{
                        while (x % i==0)
                      {
                        count++;
                           x =x/ i;
                       }
		}

		if (x > 1) count++;
		if (count >= z)cout << 1 <<endl;
		else cout << 0 <<endl;
	}
	return 0;
}
