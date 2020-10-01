/*
  $%U%$   
  $%D%$/$%M%$/$%Y%$
  $%h%$:$%m%$:$%s%$
*/
#if !defined(ONLINE_JUDGE)
    #include "prettyprint.hpp" 
#else
    #include <bits/stdc++.h>
    using namespace std;
    #define d(...) 1729
    #define cer(x) 13
#endif
const bool testcase=0;
typedef long long int ll;
#define INF LONG_MAX
#define MINF LONG_MIN 
#define MAXR 111111
const ll mod1 = 1000000007;
const ll mod2 = 998244353;



//loop 
#define loop(i,L,R) for (int i = L; i < R; i++) //next four are for "for loops"
#define loope(i,L,R) for (int i = L; i <= R; i++)
#define rloop(i,L,R) for (int i = L; i > R; i--)
#define rloope(i,L,R) for (int i = L; i >= R; i--)
#define nl cout<<'\n'



//misc
#define sz(x) ((int)((x).size()))
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL) 
#define checkbit(n,b) ( (n >> b) & 1)
#define test int _T_=1;if(testcase){cin>>_T_;}while(_T_--)



//vector
#define lastEle(vec) vec[vec.size()-1]
#define all(ve) ve.begin(),ve.end()
#define rall(x) x.rbegin(),x.rend()
#define fi first
#define se second



template<typename T>inline T mmod(T a,T b,T mod){return ((a%mod)*(b%mod))%mod;}
template<typename T>inline T smod(T a,T b,T mod){return ((a%mod)+(b%mod))%mod;}
template<typename T>bool isPrime(T n){for(T i=2;i*i<=n;i++)if(n%i==0)return 0;return 1;}
template<typename TAIL>inline void inp(TAIL& T){cin>>T;}
template<typename HEAD,typename... TAIL>inline void inp(HEAD &H,TAIL&... T){cin>>H;inp(T...);}
template<typename T>inline bool in_range(T a,T l,T r){return (a>=l&&a<=r);}
template<typename T,typename U>inline istream& operator >>(istream& in,pair<T,U> &a){in>>a.fi>>a.se;return in;}
template<typename T>inline istream& operator >>(istream& in,vector<T> &a){for(auto &x : a)in>>x;return in;}

ll lcm(ll a,ll b){return (max(a,b)/__gcd(a,b))*min(a,b);} 

// MAIN
void solve();
int main(){
    std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
    start = std::chrono::high_resolution_clock::now();
    fast;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
        // for debug in error.txt
        freopen("error.txt", "w", stderr);
    #endif
    test {
        solve();
    }
    end = std::chrono::high_resolution_clock::now();
    ll elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
    cerr << "\nElapsed Time: " << elapsed_time << "ms\n";
    return 0;
}


// SOLVE 

void solve() {
    
}
