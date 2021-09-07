#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;cin>>t;
   for(int k=1;k<=t;k++)
   {
        long long int num;cin>>num;
        double n=sqrt(num);
        long long int check=(long long int)n;
        //cout<<check<<endl;
        //cout<<n<<endl;

        if(check==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
   }
}
