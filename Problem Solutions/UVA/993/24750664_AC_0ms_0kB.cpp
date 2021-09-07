#include <bits/stdc++.h>
using namespace std;

int arra[40] = {0};
 
int main () {
    int cases, n,id;
    cin>>cases;
    while (cases--) {
        id = 0;
        memset(arra, 0, sizeof(arra));
        scanf("%d", &n);
        if (n != 1) {
            for (int i = 9; i > 1; i--) {
                while (n % i == 0) {
                    arra[id] = i;
                    id++;
                    n/=i;
                }
                if (n == 1) {
break;
}
            }
            if (n != 1)
                {
                	printf("-1\n");
                }
            else {
                for (int i = id-1; i >= 0 ; i--)
                    {
                    	printf("%d", arra[i]);
                    }
                printf("\n");
            }
        }
    else
        {
        	printf("1\n");
        }
    }
    return 0;
}