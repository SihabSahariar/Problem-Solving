#include<bits/stdc++.h>

#define pb push_back
#define nl puts("")
#define sp printf(" ")
#define phl printf ("hello\n")
#define ff first
#define ss second
#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))
#define MP make_pair
#define CLR(x,y) memset(x,y,sizeof(x))
#define UNIQUE(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define NUMDIGIT(x,y) (((int)(log10((x))/log10((y))))+1)
#define SQ(x) ((x)*(x))
#define ABS(x) ((x)<0?-(x):(x))
#define FABS(x) ((x)+eps<0?-(x):(x))
#define ALL(x) (x).begin(),(x).end()
#define LCM(x,y) (((x)/gcd((x),(y)))*(y))
#define SZ(x) ((int)(x).size())
#define LL long long

using namespace std;

typedef long long vlong;
typedef unsigned long long uvlong;
typedef pair<int,int> pii;
typedef pair<LL,LL> pll;
typedef vector<pii> vii;
typedef vector<int> vi;

const vlong INF = 2147383647;
const vlong MOD = 1000000007;
const double pi = 2*acos(0.0);
const double eps = 1e-11;

#ifdef s1h4b
    #include <ctime>
    clock_t tstart = clock();
    #define debug(args...) {dbg,args; cerr<<endl;}
    #define timeStamp printf("Execution Time: %.2fs\n", (double)(clock()-tStart)/CLOCKS_PER_SEC)
#else
    #define debug(args...)
    #define timeStamp
#endif // forthright48

struct debugger {
    template <typename T> debugger& operator , (const T& v) {
        cerr << v << " ";
        return *this;
    }
}dbg;

//int knightDir[8][2] = { {-2,1}, {-1,2], {1,2}, {2,1}, {2,-1}, {-1,-2}, {1,-2}, {-2,-1} };
//int dir4[4][2] = { {-1,0}, {0,1}, {1,0}, {0-1} };

inline vlong gcd (vlong a, vlong b) {
    a = ABS(a); b= ABS(b);
    while (b) { a = a%b; swap (a,b); } return a;
}

vlong ext_gcd (vlong A, vlong B, vlong *X, vlong *Y) {
    vlong x, y, u, v, m, n, a, b, q, r;
    x = 0, y = 1;
    u = 1, v = 0;
    for (a=A, b=B; 0!=a; b =a, a=r, x=u,y=v,u=m,v=n) {
        q = b/a;
        r = b%a;
        m = x - (u*q);
        n = y - (v*q);
    }
    *X = x; *Y = y;
    return b;
}

inline vlong modInv (vlong a, vlong m) {
    vlong x, y;
    ext_gcd(a, m, &x, &y);
    if (x<0) x += m;
    return x;
}

inline vlong power (vlong a, vlong p) {
    vlong res = 1, x = a;
    while (p) {
        if (p&1) res = (res *x);
        x = (x*x); p >>= 1;
    }
    return res;
}

inline vlong bigmod (vlong a, vlong p, vlong m) {
    vlong res = 1%m, x = a%m;
    while (p) {
        if (p&1) res = (res*x)%m;
        x = (x*x) % m; p >>=1;
    }
    return res;
}

int main()
{
    int x1,y1,x2,y2;
    int arra[]={66, 55, 44, 33, 22, 11, 65, 64, 63, 62, 61, 54, 53, 52, 51, 43, 42, 41, 32, 31};
    while(cin>>x1>>y1>>x2>>y2)
    {
     
        int pos1=0,pos2=0;
        if(x1==0 && y1==0 && x2==0 && y2==0)return 0;
        else
        {
            int comp1=min(x1,y1)+(max(x1,y1)*10);
            int comp2=min(x2,y2)+(max(x2,y2)*10);
           
            for(int i=0;i<20;i++)
            {
                if(comp1==arra[i])
                    pos1=i;
                if(comp2==arra[i])
                    pos2=i;
            }
      
            if(comp1==21 && comp2==21 || comp1==12 && comp2==12 || comp1==comp2)cout<<"Tie.\n";
            else if(comp1==21 || comp1==12)cout<<"Player 1 wins.\n";
            else if(comp2==21 || comp2==12)cout<<"Player 2 wins.\n";
            else if(pos1<pos2)cout<<"Player 1 wins.\n";
            else if(pos1>pos2)cout<<"Player 2 wins.\n";
        }
    }
}