#include<bits/stdc++.h>
#define ll long long 
using namespace std;
bool palindrome(string str)
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
    return pal; 
}
int main()
{
    int t;cin>>t;
    for(int i=1;i<=t;i++)
    {
        string str;cin>>str;
        if(palindrome(str))cout<<"Case "<<i<<": Yes\n";//<<""
        else cout<<"Case "<<i<<": No\n";//<<""
      
    }
    return 0;
}