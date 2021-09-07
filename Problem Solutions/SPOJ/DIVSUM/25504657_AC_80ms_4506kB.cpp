#include<bits/stdc++.h>
#define pb push_back
#define kichuna 0
using namespace std;


int gosagu(int x, int y) {
    if(y==0) return x;
    else return gosagu(y, x % y);
}
int Sum(int n)
{
    int back= 0;
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (i==(n/i)) back+= i;
            else back+= (i + n/i);
        }
    }

    return (back+ 1);
}

int main(){
    int t,n,i;
    int S;

    scanf("%d",&t);

    for(int tc=1;tc<=t;tc++){
        scanf("%d",&n);

        S=0;

        for(i=1;i*i<n;i++)
            if(n%i==0)
                S+=i+n/i;

        if(i*i==n) S+=i;
        S-=n;

        printf("%d\n",S);
    }

    return 0;
}
