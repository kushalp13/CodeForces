//g++ -Wshadow -Wall -O2 -Wno-unused-result -Wno-psabi
#include "bits/stdc++.h"
#define f first
#define s second
#define inf 1e18
#define ll long long
#define mod 998244353
#define pb push_back
#define vll vector<long long>
#define ull unsigned long long
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) ((long long)(x).size())
#define mll map<long long, long long>
#define pll pair<long long, long long>
using namespace std;

ll N, k;
const ll nax = 3 * 10e5 + 5;
vll fact(nax);


long long bino(int n, int r) {
    return (fact[n] / (fact[r] * fact[n - r] % mod)) % mod;
}

void input(){
	cin >> N >> k;
	fact[0] = 1;
	for (int i = 1; i <= nax; i++)  fact[i] = fact[i - 1] * i % mod;
}

void solve(){
	vector<pll> a(N);
	for(auto &it:a)cin >> it.f >> it.s;
	sort(all(a));
	ll ans = 0;
	if(k == 1){
		cout << N;
		return;
	}
	k--;
	for(ll i = 0; i < N; i++){
		ll l = i, r = N - 1, midd = i;
		while(l <= r){
			ll mid = l + (r - l)/2;
			if(a[mid].f <= a[i].s){
				midd = mid;
				l = mid + 1;
			}
			else r = mid - 1;
		}
		if(abs(midd - i) < k) continue;
		else ans = (ans + bino(abs(midd - i), k))%mod;
		cout << a[i].f << " " << a[i].s << "-> " << ans << endl;
	}
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.precision(20);
	ll t = 1;
	//cin >> t;
	while(t--){
		input();
		solve();
        cout<<endl;
	}
	cin.get();
	return 0;
}