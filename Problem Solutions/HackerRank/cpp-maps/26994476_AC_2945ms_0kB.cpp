#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    map<string,int>db;
    int t;cin>>t;
    while(t--)
    {
        ll q,y;
        string x;
        cin>>q>>x;
        if(q==1)
        {
            cin>>y;
            db[x]+=y;
            //db.insert(make_pair(x,y));
        }
        else if(q==2)
        {
            db.erase(x);
        }
        else if(q==3)
        {
            if(db.find(x)==db.end())cout<<0<<endl;
            else
            {
               
               cout<<db[x]<<endl; 

            }
            
        }
    }
    return 0;
}