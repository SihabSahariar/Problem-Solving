#include <iostream>

using namespace std;

int main()
{
   string str;cin>>str;
   bool c1=true,c2=true;
   for(int i=0;i<str.size();i++)
   {
       if(i%2==0)//ODD
       {
            if(str[i]!='R'&& str[i]!='U'&& str[i]!='D')
            {
                c1=false;
                break;
            }
       }
       else if(i%2==1)
       {
            if(str[i]!='L'&& str[i]!='U'&&str[i]!='D')
            {
                c1=false;
                break;
            }
       }
   }
   if(c1==true && c2==true)
   {
       cout<<"Yes\n";
   }
   else cout<<"No\n";
   
   return 0;
}