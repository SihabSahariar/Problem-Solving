//Constractor
#include<bits/stdc++.h>
using namespace std;
class MyClass{
    public:
        MyClass(string z)
        {
            setName(z);
            //cout<<"This will get printed automatically!";
        }
        void setName(string x)
        {
            name = x;
        }
        string getName()
        {
            return name;
        }
    private:
        string name;

};
int main()
{
    MyClass mc("Sihab Sahariar");
    cout<<mc.getName();
   
    return 0;
}