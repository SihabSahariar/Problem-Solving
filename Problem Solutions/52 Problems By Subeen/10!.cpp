#include<bits/stdc++.h>
using namespace std;
unsigned long long int rightsidezero(unsigned long long int x)
{

    unsigned long long int count=0;
    while(x>0)
    {
        unsigned long long int temp=x%10;
        if(temp==0)count++;
        else break;
        x/=10;
    }
    return count;
}

int main()
{
     int mal=78900;
     unsigned long long int zero=rightsidezero(7890000);
     cout<<zero;
}
