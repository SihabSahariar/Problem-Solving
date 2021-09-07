#include<bits/stdc++.h>
using namespace std;
void c_p_c()
{
	#ifndef sizan
	//freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
	#endif
}
int main()
{
	//c_p_c();
	int prime[500];
	int count_prime=0;
	for(int i=2;i<600;i++)
	{
		bool check=true;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				check=false;
				break;

			}

		}
		if(check==true) {

				prime[count_prime]=i;
				count_prime++;
		}
	}

//	for(int i=0;i<count_prime;i++)
//		cout<<prime[i]<<endl;
	int t;cin>>t;
	while(t--)
    {
        int x;cin>>x;
        if(x<=500 && x>=10)
        {
            int pos;
            for(int i=0;i<600;i++)
            {
                if(prime[i]>=x)
                {
                    pos=i;
                    break;
                }
            }
            if(prime[pos]==x)
                cout<<prime[pos-1]<<" "<<prime[pos+1]<<endl;
            else
                cout<<prime[pos-1]<<" "<<prime[pos]<<endl;
        }
        else
            return 0;

    }
	return 0;
}
