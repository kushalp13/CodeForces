#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         cout<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pw(b,p)         pow(b,p) + 0.1
#define endl            "\n"
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());


void __print(int32_t x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
 
char myHeap[200 * 1024 * 1024];
int sz = 0;
void assert_tle(bool q) { while (!q); }
void* operator new  ( std::size_t count ) {
    sz += count;
    assert_tle(sz <= 200 * 1024 * 1024);
    return myHeap + sz - count;
}
 
void operator delete (void *ptr) { }
 
 
void fastIO()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

void solve()
{
    int n,l;
    cin>>n>>l;

    cout<<fixed<<setprecision(9);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    double r1[n],r2[n];

    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            r1[0]=(ar[0]);
            r2[n-1]=(l-ar[n-1]);
            //cout<<r1[0]<<endl<<r2[n-1]<<endl;
        }
        else
        {
            r1[i]=(ar[i]-ar[i-1])/(i+1.0);
            r2[n-i-1]=(ar[n-i]-ar[n-i-1])/(i+1.0);
            r1[i]+=r1[i-1];
            r2[n-i-1]+=r2[n-i];
        }

        debug(r1[i],r2[n-i-1],ar[i],ar[i-1],ar[n-i-1]);
    }

    for(int i=0;i<n;i++)
    {
        if(r1[i]>r2[i])
        {
            double tr=r1[i]-r2[i];
            debug(tr,i,n-i,n-i+1+i+1,ar[i],r1[i],r2[i]);
            if(i==0)
                cout<<r2[i]+(i+1)*tr/(n-i+1+i+1);
            else
            cout<<r2[i]+(i+1)*tr/(n-i+1+i+1);
            return;
        }
    }

    double d=l-ar[n-1];

    d-=r1[n-1];
    debug(d,n+2);
    cout<<r1[n-1]+d/(n+2.0);
}
 
int32_t main()
{
    fastIO();
    w(t)
    {
        solve();
        cout<<endl;
    }
    return 0;
}