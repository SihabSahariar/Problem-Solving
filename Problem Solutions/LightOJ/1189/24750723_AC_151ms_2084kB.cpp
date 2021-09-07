#include <bits/stdc++.h>

using namespace std;
long long int Fact[25],ans[25];
long long int factorial(int n)
{
    int i;
    long long int result = 1;
    for(i = 1; i<=n; i++)
    {

        result*=i;

    }
    return result;

}

int main()
{
    int n,countNumber ;
    long long int m;
    for(int i =0 ; i<20; i++)
    {
        Fact[i] = factorial(i);
    }

    cin>>n;
    for(int i = 0; i<n; i++)
    {
        countNumber = 0;

        cin>>m;

        for(int j = 19; j>=0&&m>0; j--)
        {
            if(Fact[j]<=m)
            {

                m-=Fact[j];
                ans[countNumber] = j;
                countNumber++;

            }
        }
        cout<<"Case "<<i+1<<": ";
        if(m!=0)
            cout<<"impossible"<<endl;
        else
        {
            cout<<ans[countNumber-1];
            for(int k = countNumber-2; k>=0; k--)
                cout<<"!+"<<ans[k];
            cout<<"!"<<endl;


        }

    }



    return 0;
}