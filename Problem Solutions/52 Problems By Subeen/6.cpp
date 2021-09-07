#include<bits/stdc++.h>
using namespace std;
int sum(int x)
{
    int arra[5];
    int i=0;
    while(x>0)
    {
        arra[i]=x%10;
        x/=10;
        i++;
    }

    return arra[0]+arra[4];
}
int main()
{
    #ifndef solve
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x;cin>>x;
        if(x>=10000 && x<=99999)
        {
            int s=sum(x);
            printf("Sum = %d\n",s);
        }
    }
}
