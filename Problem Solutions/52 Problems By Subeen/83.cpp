#include<bits/stdc++.h>
#define l(x) int l;cin>>l;while(l--)
using namespace std;
int main()
{
    l(x)
    {
        int t;cin>>t;
        int power=0;;                             //TLE Khaisi
        for(int i=0;i<=(t/2);i++)
        {
            int p=(int)pow(2,i);
            if(p==t)
             {
                 power=1;
                 break;
             }
        }
        if(power==1)
            cout<<"It's a power of 2"<<endl;
        else
            cout<<"Not a power of 2"<<endl;
    }
    return 0;
}
