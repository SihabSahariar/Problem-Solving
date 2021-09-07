#include<bits/stdc++.h>
using namespace std;
int main()

{
   int t;cin>>t;
   while(t--)
   {
        int row;
    int digit;
    cin>>row>>digit;

    {
          for(int i=1;i<=row;i++)
        {
            for(int j=1;j<i;j++)
                cout<<digit<<" ";

           cout<<digit<<endl;
        }
    for(int i=row-1;i>=1;i--)
    {
        for(int j=1;j<i;j++)
            cout<<digit<<" ";

       cout<<digit<<endl;
    }
    cout<<endl;
    }



}
   return 0;
}
