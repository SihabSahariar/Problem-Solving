#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    
    int t;cin>>t;
    vector<int>v; 
    set<int>s;
    for(int i=1;i<=t;i++)
    {
        int tt;cin>>tt;
        s.insert(tt);
      
    }
    if(s.size()<2)cout<<"NO\n";
    else{
        set<int>::iterator it = s.begin();
        advance(it, 1);
        int x = *it;
        cout<<x<<endl; 
    } 

    return 0;
}