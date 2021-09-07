#include <bits/stdc++.h>

using namespace std;

int main()
{
   char str[5];cin>>str;
   sort(str,str+(strlen(str)));
      if(str[0]==str[1] && str[2]==str[3] && str[1]!=str[2])cout<<"Yes\n";
      else cout<<"No\n";
 
   return 0;
}