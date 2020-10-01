/*May the force be with me*/
#include "bits/stdc++.h"
#define f first
#define s second
#define inf 1e18
#define ll long long
#define mod 1000000007
#define pb push_back
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
	string s;
	cin >> s;
	ll a[3][n];
	for(ll i = 0; i < n; i++)for(ll j = 0; j < 3; j++)a[j][i] = 0;
	if(s[0] == 'a' or s[0] == '?')a[0][0] = 1;
	for(ll i = 1; i < n; i++){
		for(ll j = 0; j < 3; j++)a[j][i] = a[j][i-1];
		bool g = s[i]=='?';
		if(s[i] == 'a' or g)a[0][i]++;
		if(s[i] == 'b' or g)a[1][i] += a[0][i-1];
		if(s[i] == 'c' or g)a[2][i] += a[1][i-1];
	}
	cout << a[2][n-1];
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