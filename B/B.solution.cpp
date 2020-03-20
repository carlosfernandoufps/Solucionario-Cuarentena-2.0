#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c, s;
	cout << fixed << setprecision(3);
	while(cin >> a >> b >> c){
		if(a + b > c && a + c > b && b + c > a){
			s = (a + b + c)/2.0;
			double ans = sqrt(s*(s-a)*(s-b)*(s-c));
			cout << ans << endl;
		}else{
			cout << "IMPOSIBLE" << endl;
		}
	}
	return 0;
}