#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define S second
#define F first
#define sz size()
#define eps 0.000001
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

const int MAX = 502;
ll sum[MAX][MAX];
ll dp[MAX][MAX];
int arr[MAX];
int N;
ll oo = 1e9+7;

ll f(int i, int cuts){
	if(cuts == 0) return sum[i][N - 1];
	ll &ans = dp[i][cuts];
	if(ans != -1) return ans;
	ans = oo;
	for(int j = i; j < N; j++){
		ans = min(ans, max(sum[i][j], f(j + 1, cuts - 1)));
	}
	return ans;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, cuts, t;
	cin >> t;
	while(t--){
		cin >> N >> cuts;
		for(int i = 0; i < N; i++){
			cin >> arr[i];
		}
		for(int i = 0; i < N; i++){
			sum[i][i] = arr[i];
			for(int j = i + 1; j < N; j++){
				sum[i][j] = sum[j][i] = sum[i][j - 1] + arr[j]; 
			}
		}
		memset(dp, -1, sizeof(dp));
		ll ans = f(0, cuts - 1);
		cuts--;
		ll sum = 0;
		stack<ll> v;
		for(int i = N - 1; i >= 0; i--){
			sum += arr[i];
			if(sum > ans || cuts == i+1){
				v.push(-1);
				sum = arr[i];
				cuts--;
			}
			v.push(arr[i]);
		}
		while(v.size()){
			int k = v.top();
			v.pop();
			if(k == -1) cout << "/ ";
			else{
				cout << k;
				if(v.size()) cout << " ";
				else cout << endl;
			}
		}
	}
}