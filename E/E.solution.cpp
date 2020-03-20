#include <iostream>
using namespace std;

int main() {
	int n, m, i_max, j_max;
	while(cin >> n >> m){
		char mat[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> mat[i][j];
			}
		}
		char aux; int mx = 1; bool same;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				aux = mat[i][j];
				for(int k = 1; i + k < n && j + k < m; k++){
					same = true;
					for(int ii = i; ii <= i + k && same; ii++){
						for(int jj = j; jj <= j + k && same; jj++){
							if(aux != mat[ii][jj])
								same = false;
						}
					}
					if(same) mx = max(mx, (k+1)*(k+1));
				}
			}
		}
		cout << mx << endl;
	}
	return 0;
}