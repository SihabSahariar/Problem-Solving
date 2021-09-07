#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    char format[100];
    gets(format);
    puts(strstr(format,"1111111")||strstr(format,"0000000")?"YES":"NO");
 return 0;
}
