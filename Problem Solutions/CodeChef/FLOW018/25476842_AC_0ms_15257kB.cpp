#include<bits/stdc++.h>
using namespace std;
int fact(int x)
{
    int mal=1;
    for(int i=x;i>1;i--)
    {
        mal*=i;
    }
    return mal;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x;cin>>x;
        if(x==0)cout<<1<<endl;
        else if(x>0 && x<=20){
            cout<<fact(x)<<endl;
        }
    }
    return 0;
}
