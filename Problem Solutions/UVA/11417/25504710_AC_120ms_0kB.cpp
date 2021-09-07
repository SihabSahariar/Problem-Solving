#include<bits/stdc++.h>
#define pb push_back
#define kichuna 0
using namespace std;


int GCD(int x, int y) {
    if(y==0) return x;
    else return GCD(y, x % y);
}
int main()
{
    long long N;
    while(cin>>N)
    {
        if (N==0)break;
        else
       {
            long long G=0;
            for(long long i=1;i<N;i++)
            for(long long j=i+1;j<=N;j++)
            {
            G+=GCD(i,j);
            }
            cout<<G<<endl;
       }

    }
}
