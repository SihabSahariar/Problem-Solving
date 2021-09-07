#include <bits/stdc++.h>

using namespace std;

int main()
{
   map<string,int>s;
   int t;cin>>t;
   int count=0;
   while(t--)
   {
       string str;cin>>str;
       if(s.count(str)==0)
       {
            s[str]=1;
            cout<<"OK\n";
       }
       else
       {
           cout<<str<<s[str]<<endl;
           s[str]++;
       }
   }
   
   
   return 0;
}