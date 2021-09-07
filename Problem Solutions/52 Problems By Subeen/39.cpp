#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
            string str;cin>>str;
        int p=str.length();
        string rev;
        for(int i=p-1;i>=0;i--)
        {
            rev+=str[i];
        }
        int count=0;
       for(int j=0;j<p;j++)
       {
           if(str[j]==rev[j])count++;
       }



        if(count==p)cout<<"Yes! It is Palindrome!"<<endl;
        else cout<<"Sorry! It is not Palindrome!"<<endl;
    }
}
