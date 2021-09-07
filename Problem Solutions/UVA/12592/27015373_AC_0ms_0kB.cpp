#include <bits/stdc++.h>

using namespace std;

int main()
{
   map<string,string>s;
   int t;cin>>t;
   int count=0;
   cin.ignore();
   while(t--)
   {
       string first,second;
       getline(cin,first);
       getline(cin,second);
       s.insert(pair<string,string>(first,second));

   }
   map<string,string>::iterator p;
   int m;
   cin>>m;
   cin.ignore();
   for(int j=1;j<=m;j++)
   {
   	   string ss;
       getline(cin,ss);
       for(p=s.begin();p!=s.end();p++)
       {
           if(ss==p->first)
           {
               cout<<p->second<<endl;
           }
       }


   }
   
   return 0;
}