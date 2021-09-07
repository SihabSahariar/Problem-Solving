#include<bits/stdc++.h>
using namespace std;
unsigned long long int zero(unsigned long long int x)
{
   // long long x=45555000;
    unsigned long long int count=0;
    while(x>0)
    {
        unsigned long long int temp=x%10;
        if(temp==0)count++;
        x/=10;
    }
    return count;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        unsigned long long int mal=1;
        unsigned long long int a;
        cin>>a;
        if(a==0) cout<<0<<endl;
        else
        {
            for(unsigned long long int i=1;i<=a;i++)
                mal*=i;
           unsigned long long int zeroo=zero(mal);
           cout<<zeroo<<endl;
        }

    }
}
