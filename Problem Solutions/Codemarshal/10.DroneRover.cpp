#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int k=1;k<=t;k++)
    {
        int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    string str;
    cin>>str; //0 0 3 0 RLRL
              //A A B B
    bool coll=false;
    for(int i=0;i<str.size();i++)
    {
             if(str[i] == 'R'){
                if(i%2 == 0 && x1 < 7)x1++;
                else if(i%2 == 1 && x2 < 7)x2++;
            }
            else if(str[i] == 'L'){
                if(i%2 == 0 && x1 > 0)x1--;
                else if(i%2 == 1 && x2 > 0)x2--;
            }
            else if(str[i] == 'U'){
                if(i%2 == 0 && y1 < 7)y1++;
                else if (i%2 == 1 && y2 < 7)y2++;
            }
            else if(str[i] == 'D'){
                if(i%2 == 0 && y1 > 0)y1--;
                else if(i%2 == 1 && y2 > 0)y2--;
            }

                if(x1==x2&& y1==y2)
                {
                    coll=true;
                    break;
                }

            }

    //    cout<<x1<<y1<<" "<<x2<<y2<<endl;
           if(coll)cout << "Case " << k << ": COLLISION" << endl;
        else cout << "Case " << k  << ": SAFE" << endl;
    }

    return 0;
}




