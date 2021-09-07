#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long arra[3];
   for(int i=0;i<3;i++)
    cin>>arra[i];
    
    sort(arra,arra+3);
    //if(arra[0]==arra[1] && arra[1]==arra[2] && arra[0]==arra[2])cout<<0<<endl;
   // else
    //{
       long long s= arra[2]-arra[0];
       long long s1 =arra[1]-arra[0];
       cout<<s+s1<<endl;
        
        
  //  }
    
   return 0;
}