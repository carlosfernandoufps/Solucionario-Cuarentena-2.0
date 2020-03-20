#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int cant = 0;
	while(cin >> s){
		int n = s.size();
		for(int i = 0; i < n; i++){
			if(s[i] == 't' || s[i] == 'T')
				cant++;
		}
	}
	cout << cant << endl;
	return 0;
}