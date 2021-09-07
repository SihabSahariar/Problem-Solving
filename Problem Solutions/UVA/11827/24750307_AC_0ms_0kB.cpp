#include<bits/stdc++.h>
using namespace std;
int fgcd(int p,int q)
{
    if(q==0)
        return p;
    else
        return fgcd(q,p%q);
}
int main()
{
    int i,j,ar[10000],n,gcd;
    cin>>n;
    getchar();
    string  s;
    while(n--)
    {
        getline(cin,s);
        stringstream ss(s);
        int k=0;
        while(ss>>ar[k])
            ++k;
        int gcd=0;
        for(i=0; i<k; i++)
        {
            for(j=i+1; j<k; j++)
            {
                gcd=max(gcd,fgcd(ar[i],ar[j]));

            }

        }
        cout<<gcd<<endl;

    }
    return 0;
}