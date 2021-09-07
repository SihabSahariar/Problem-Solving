//3nc0d3d by s1h4b s4h4r!4r
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

#ifdef S1x4n
    #include <ctime>
    clock_t tstart = clock();
    #define debug(args...) {dbg,args; cerr<<endl;}
    #define timeStamp printf("Execution Time: %.2fs\n", (double)(clock()-tStart)/CLOCKS_PER_SEC)
#else
    #define debug(args...)
    #define timeStamp
#endif // s1x4n

struct debugger {
    template <typename T> debugger& operator , (const T& v) {
        cerr << v << " ";
        return *this;
    }
}dbg;



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
    *X = x; 
    *Y = y;
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

//////////////********** Template ends *************

int main () {
    //#ifdef s1x4n
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //#endif 

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {





    }
    return 0;
}