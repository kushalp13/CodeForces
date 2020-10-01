//g++ -Wshadow -Wall -O2 -Wno-unused-result -Wno-psabi
#include "bits/stdc++.h"
#define f first
#define s second
#define inf 1e18
#define ll long long
#define mod 1000000007
#define pb emplace_back
#define vll vector<long long int>
#define ull unsigned long long
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) ((long long int)(x).size())
#define mll map<long long int, long long int>
#define pll pair<long long int, long long int>
using namespace std;

ll n, k;

void input(){
	cin >> k >>n;
}

void solve(){
	vll a(n);
	for(auto &it:a)cin >> it;
	mll mp;
	for(ll i = 0; i < n; i++){
		mp[a[i]]++;
		if(sz(mp) != k) cout << 0;
		else{
			for(ll j = 1; j <= k; j++){
				mp[j]--;
				if(!mp[j])mp.erase(j);
			}
			cout<<1;
		}
	}
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