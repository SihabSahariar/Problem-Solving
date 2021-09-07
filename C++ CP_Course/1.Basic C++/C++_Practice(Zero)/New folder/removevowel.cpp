#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
       for(int i=0;i<s.length();i++){
      if(s[i]>=65&&s[i]<=90)
         s[i]=s[i]+32;
   }
    //count new array size
    int count=0;
      for(int i=0,j=0;i<s.length();i++)
        {
            if(s[i]!='a'&& s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
            {
                count++;
            }
        }
       // cout<<count<<endl;




    char su[s.length()-count];
    int j=0;
    for(int i=0;i<s.length();i++)
    {
          if(s[i]!='a'&& s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        {
                su[j]=s[i];
                j++;

        }


    }
    for(int k=0;k<j;k++)
    {
        cout<<"."<<su[k];
    }
}
