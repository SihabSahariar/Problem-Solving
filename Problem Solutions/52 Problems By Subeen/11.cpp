#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int mal=1;
        long a;cin>>a;
        if(a==0) cout<<1<<endl;
        else
        {
            for(long long int i=1;i<=a;i++)
                mal*=i;
            cout<<mal<<endl;
        }

    }
}
