#include<bits/stdc++.h>
using namespace std;
int main()
{
  int size;cin>>size;
  for(int i=0;i<size;i++)
  {
      for(int s=0;s<size-i-1;s++)
      {
          cout<<" ";
      }

      for(int j=0;j<=i;j++)
      {
          cout<<"#";
      }
      cout<<endl;
  }


  return 0;
}



//     #
//    ##
//   ###
//  ####
// #####
//######
