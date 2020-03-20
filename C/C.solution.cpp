#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int id = 0, mx = 0;
		int tes[n], can[n];
		for(int i = 0; i < n; i++){
			cin >> tes[i];
		}
		for(int i = 0; i < n; i++){
			cin >> can[i];
			if(can[i]*tes[i] > mx){
				mx = can[i]*tes[i];
				id = i + 1;
			}
		}
		cout << id << endl;
	}
	return 0;
}