//Classes & Objects
#include<bits/stdc++.h>
using namespace std;
class MyClass{
    public:
        void coolSaying()
        {
            cout<<"Sizan  is cool\n";
        }
        int summ(int x,int y)
        {
            return x%y+y;
        }
        int power(double p,double q)
        {
            return pow(p,q);
        }


};


int main()
{
    MyClass name;
    name.coolSaying();
    int a,b;
    cin>>a>>b;
    int x=name.summ(a,b);
    cout<<x;
    double q,r;
    cin>>q>>r;

    int ll=(int)name.power(q,r);
    cout<<"q^r= "<<ll;
    return 0;
}