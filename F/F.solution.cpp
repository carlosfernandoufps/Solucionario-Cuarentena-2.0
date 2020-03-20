#include <bits/stdc++.h>
using namespace std;

const int MAX = 12;
int N, target;
int arr[MAX];
bool ans[5005];

void backtrack(int i, int value){
	if(i == N){
		ans[2000 + value] = true;	
		return;
	}
	backtrack(i+1, value + arr[i]);
	backtrack(i+1, value - arr[i]);
	backtrack(i+1, value);
}

void init(){
	for(int i = 0; i <= 5000; i++){
		ans[i] = false;
	}
}

int main() {
	int t, q, k;
	cin >> t;
	while(t--){
		init();
		cin >> N >> q;
		for(int i = 0; i < N; i++){
			cin >> arr[i];
		}
		backtrack(0, 0);
		for(int i = 0; i < q; i++){
			cin >> k;
			if(!ans[2000+k]) cout << "IM";
			cout << "POSIBLE" << endl;
		}
	}
	return 0;
}