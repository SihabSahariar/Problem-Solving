#include<bits/stdc++.h>
using namespace std;
int main()
{
 
  int t;
 
  cin>>t;
 
 
    if(t%7==0 || t%4==0||t%47==0) cout<<"YES"<<endl;
    else
    {
         int count=0,check=0;
         while(t>0)
        {
            int temp=t%10;
            check+=1;
            if(temp==4||temp==7)
            {
                count++;
            }
            t/=10;
 
        }
        //cout<<count<<check<<endl;
    if(count==check) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 
    }
 
}