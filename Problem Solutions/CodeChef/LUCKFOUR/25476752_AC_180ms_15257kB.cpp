#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        long long count=0;
        for(int i=0;i<x.size();i++)
            if(x[i]=='4')count++;
        cout<<count<<endl;
    }
    return 0;
}
