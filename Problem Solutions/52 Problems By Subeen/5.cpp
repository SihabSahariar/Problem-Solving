#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, i, j, t;
    cin >> n;
    while(n--)
    {
        cin >> x;
        for(i=0; i<x; i++)
        {
            for(j=0; j<x; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        if(n>0)
            cout << "\n";
    }
    return 0;
}
