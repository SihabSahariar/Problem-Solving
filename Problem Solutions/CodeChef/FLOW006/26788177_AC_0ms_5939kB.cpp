#include <iostream>

using namespace std;

int main()
{
  
    int t;cin>>t;
    while(t--)
    {
        int k;cin>>k;
        int count=0;
        while(k>0)
        {
            int temp=k%10;
            count+=temp;
            k/=10;
        }
        cout<<count<<endl;
    }

   
    return 0;
}