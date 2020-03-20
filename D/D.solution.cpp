#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define S second
#define F first
#define sz size()
#define eps 0.000001
#define oo 2000000007
#define endl '\n'
#define bg begin()
#define nd end()
#define up upper_bound
#define lw lower_bound
#define debug(x) #x << " = " << x << "; "
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;

ll f(ll p, ll k, ll n){
	double _p = p;
	double _k = k;
	double _n = n;
	double ans = _p*2 - 1 + sqrt(_p*_p*4 - _p*4 + 1 + (_n -_k)*8);
	ans /= 2.0;
	ll _ans = ans + eps;
	return _ans + 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll p, k, n;
	while(cin >> p >> k >> n){
		ll ans = f(p, k, n);
		cout << ans << endl;
	}
	
}