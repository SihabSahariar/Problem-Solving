#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int pd=0,sd=0,sdstart=size-1;
    int matrix[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            cin>>matrix[i][j];
            if(i==j)pd+=matrix[i][j];
            if(j==sdstart)
            {
                sd+=matrix[i][sdstart];
                sdstart--;
            }
        }
    }

    //Primary Diagonal
    cout<<abs(pd-sd)<<endl;
    return 0;
}
