#include <bits/stdc++.h>
using namespace std;
int main()
{
int t,x,y,a,b;
cin>>t;
while(t--){
cin>>x>>y>>a>>b;
if((y-x)%(a+b)==0)
cout<<(y-x)/(a+b)<<endl;
else
cout<<-1<<endl;
}
}