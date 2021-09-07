#include <bits/stdc++.h>
#define q(x,y,z) memset(x,y,z)
using namespace std;
int Query[40] = {0};
int check(int x)
{
for(int i=0;i<x;i++)
if(i=x%i==0) return 1;
} 

int main () {
    int cases, n;
    int ind;
    scanf("%d", &cases);
    while (cases--) {
        ind = 0;
        q(Query, 0, sizeof(Query));
        scanf("%d", &n);
        if (n != 1) {
            for (int i = 9; i > 1; i--) {
                while (n % i == 0) {
                    Query[ind] = i;
                    ind++;
                    n = n / i;
                }
                if (n == 1) break;
            }
            if (n != 1)
                printf("-1\n");
            else {
                for (int i = ind-1; i >= 0 ; i--)
                    printf("%d", Query[i]);
                cout<<endl;
            }
        }
    else
       cout<<"1"<<endl;
    }
    return 0;
}