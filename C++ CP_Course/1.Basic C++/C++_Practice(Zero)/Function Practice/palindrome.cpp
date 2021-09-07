#include <bits/stdc++.h>
using namespace std;
void palindrome(string str)
{
   bool pal=true; 
   for(int i=str.size()-1,j=0;i>=0;i--,j++)
   {
       if(str[i]!=str[j])
       {
           pal=false;
           break;
       }
   }
    if(pal)cout<<"Palindrome\n";
    else cout<<"Not Palindrome\n";

}


int main()
{
    string str;
    cin>>str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    palindrome(str);
   
  
   return 0;
}