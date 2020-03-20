#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a1, b2, c3, d4, e5, f6, ans;
	while(cin >> a1 >> b2 >> c3 >> d4 >> e5 >> f6, a1 + b2 + c3 + d4 + e5 + f6){
		ans = 0;
		ans += f6;
		ans += e5;
		a1 -= e5*11;
		ans += d4;
		b2 -= d4*5;
		ans += c3/4;
		c3 %= 4;
		if(c3 > 0){
			ans += 1;
			if(c3 == 3){
				b2 -= 1;
				a1 -= 5;
			}else if(c3 == 2){
				b2 -= 3;
				a1 -= 6;
			}
			else{
				b2 -= 5;
				a1 -= 7;
			}
		}
		if(b2 > 0){
			ans += b2/9;
			b2 %= 9;
			if(b2 > 0){
				ans++;
				a1 -= (36 - b2*4);
			}
		}else{
			a1 -= abs(b2*4);
		}
		if(a1 > 0){
			ans += a1/36;
			a1 %= 36;
			if(a1 > 0)
				ans++;
		}
		cout << ans << endl;	
	}
	return 0;
}