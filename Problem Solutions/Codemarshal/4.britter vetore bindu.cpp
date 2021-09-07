#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    int p=1;
    while(t--)
    {
        double x1,y1,x2,y2,r;
        cin>>x1>>y1>>r>>x2>>y2;
        double d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        printf("Case %d: ",p);
        if(d<r) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        p++;
    }
}

