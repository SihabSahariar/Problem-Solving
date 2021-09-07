#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        double x1,y1,x2,y2,r;
        cin>>x1>>y1>>r>>x2>>y2;
        double d=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        if(d<=r) cout<<"The point is inside the circle"<<endl;
        else cout<<"The point is not inside the circle"<<endl;
    }
}
