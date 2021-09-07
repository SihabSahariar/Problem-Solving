#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int s,end;cin>>s>>end;
        int countprime=0;
       for(int start=s;start<=end;start++)
       {
            bool prime;
            int count=0;
            for(int i=1;i<=start;i++)
            {
                if(start%i==0 && start!=1)
                  {
                        count++;
                          if(count>2)
                            {
                                prime=false;
                                break;
                            }
                            else prime=true;
                  }


            }
            if(prime==true)
                countprime++;
       }
        if(s==1)cout<<countprime-1<<endl;
        else cout<<countprime<<endl;
    }
}
