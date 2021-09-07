//Using Variable in Classes
#include<bits/stdc++.h>
using namespace std;
class MyClass{
    public:
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
    MyClass bo;
    bo.setName("Fuck You");
    string p=bo.getName();
    cout<<p;
    return 0;
}