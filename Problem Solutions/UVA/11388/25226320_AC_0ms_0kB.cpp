#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int n,lcm,i,gcm;
    scanf("%d",&n);
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d%d",&gcm,&lcm);
            {
                if(lcm%gcm==0)
                    printf("%d %d\n",gcm,lcm);
                else
                    printf("-1\n");

            }

        }
    }
}