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

ll n;

void input(){
	cin >> n;
}

void solve(){
	ll N = n;
	vll a;
	if(n%2 == 0)a.pb(2);
	while(n%2 == 0)n/=2;
	for(ll i = 3; i <= n; i+=2){
		if(n%i == 0)a.pb(i);
		while(n%i == 0)n/=i;
	}
	if(n != 1)a.pb(n);
	ll x = N;
	x /= a[0];
	for(ll i = 0; i < sz(a); i++){
		cout << a[i] << " ";
		while(x%a[i] == 0) {
			cout << x << " ";
			x/=a[i];
		}
	}
	cout << N;
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