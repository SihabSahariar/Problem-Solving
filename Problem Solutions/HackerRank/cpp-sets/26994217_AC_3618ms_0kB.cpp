#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;cin>>t;
   set<int>s; 
   while(t--)
   {
       int q,c;cin>>q>>c;
       if(q==1)
       {
            s.insert(c);   
       }
        else if(q==2) 
       {
            s.erase(c);   
       }
        else if(q==3)
       {
            if(s.find(c)==s.end())
                cout<<"No\n";
            else 
                cout<<"Yes\n"; 
       }
   }
   
   return 0;
}