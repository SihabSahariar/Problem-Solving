#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int t;cin>>t;
    int arra[t];
    for(int i=0;i<t;i++)cin>>arra[i];
    int se=0,dim=0;
    
    int l = 0 , r = t-1;
    int cnt = 1;
    while(l<=r){

        if(cnt%2==1)
        {
            if(l==r){se+=arra[l];break;}
            
            if(arra[l]>arra[r])
            {
                se+=arra[l];
                l++;
                //dim+=arra[r];
            }
            else{
                se+=arra[r];//dim+=arra[l];
                r--;
            }
        }
        else{
            if(arra[l]>arra[r])
            {
                dim+=arra[l];l++;

            }
            else{
                dim+=arra[r];r--;
            }
        }
        cnt++;
    }
    cout<<se<<" "<<dim<<endl;
    return 0;
}