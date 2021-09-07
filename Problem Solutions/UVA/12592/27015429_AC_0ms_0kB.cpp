#include <bits/stdc++.h>

using namespace std;

int main()
{
   map<string,string>s;
   string first,second;
   int t;
   cin>>t;
   getchar();
   while(t--)
   {
 
       getline(cin,first);
       getline(cin,second);
       s[first]=second;
   }
   int x;cin>>x;
   getchar();
   while(x--)
   {
   	string str;
   	getline(cin,str);
   	cout<<s[str]<<endl;
   }

   s.clear();
   
   return 0;
}