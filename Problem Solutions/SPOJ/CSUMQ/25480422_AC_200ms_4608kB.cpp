#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;cin>>t;
    long long arra[t];
    for(long long i=0;i<t;i++)
        cin>>arra[i];

    long long Q;cin>>Q;
    while(Q--)
    {
        long long a,b;cin>>a>>b;
        if((a>=0 && a<=t-1) && (b>=0 && b<=t-1)){//cout<<arra[a]<<endl;


            long long sum=0;
            for(long long i=a;i<=b;i++)
                sum+=arra[i];
            cout<<sum<<endl;
        }
    }
    return 0;
}
