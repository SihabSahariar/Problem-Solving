#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long arra[3];
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int i=0;i<3;i++)cin>>arra[i];
        sort(arra,arra+3);
        cout<<arra[1]<<endl;

    }
    return 0;
}
