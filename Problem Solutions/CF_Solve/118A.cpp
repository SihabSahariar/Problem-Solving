#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
      if(s.length()>=1 && s.length()<=100)
      {
           for(int i=0;i<s.length();i++){
              if(s[i]>=65&&s[i]<=90)
                 s[i]=s[i]+32;
           }
            string su;int j=0;
            for(int i=0;i<s.length();i++)
            {
                  if(s[i]!='a'&& s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y')
                {
                        su+=s[i];  //su[j]=s[i]; -> Error because out of boundary
                        j++;

                }
            }
            for(int k=0;k<j;k++)
            {
                cout<<"."<<su[k];
            }
      }
      return 0;
}



//alternative solution
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//string s,s2;
//cin>>s;
//int len=s.length();
//for(int i=0;i<len;i++){
//	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
//		continue;
//	else
//	{
//		s2+='.';
//		s2+=towlower(s[i]);
//	}
//
//
//
//}
//cout<<s2;
