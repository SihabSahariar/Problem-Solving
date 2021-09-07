#include <bits/stdc++.h>

using namespace std;

int main()
{
  char str[1001];
  cin>>str;
  printf("%c",toupper(str[0]));
  for(int i=1;i<strlen(str);i++)
   {
       cout<<str[i];
   }
   cout<<endl;
   return 0;
}