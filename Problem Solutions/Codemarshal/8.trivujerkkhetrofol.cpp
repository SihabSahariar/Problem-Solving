#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;cin>>t;
   int p=1;
   while(t--)
   {
        double a,b,c;
        cin>>a>>b>>c;

             double s=(a+b+c)/2;
             double area=sqrt(s*(s-a)*(s-b)*(s-c));
                printf("Case %d: %.10f\n",p,area);
            p++;



   }
    return 0;
}
