#include <bits/stdc++.h>

using namespace std;

int main()
{
   set<string>s;
   char x[1001];
   int t;cin>>t;
   while(t--)
   {
        cin>>x;
        int t=strlen(x);
        sort(x,x+t);
        t=unique(x,x+t)-x;
       /* cout<<x<<t<<" ";
        cout<<endl;*/
        x[t]='\0';
        s.insert(x);
   }
   cout<<s.size()<<endl; 
   return 0;
}