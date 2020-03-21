#include<bits/stdc++.h>
using namespace std;

int main(){
    long long ejerciciosP,ejerciciosTio,porDiaP;
    while(cin >> porDiaP >> ejerciciosTio >> ejerciciosP){
            long long b=0,e=1e9,x,m;
            while(b<e){
                m=(b+e)/2;
                if(ejerciciosTio+(m*(m+1)/2)>ejerciciosP+(m*porDiaP)){
                    e=m;
                }else{
                    b=m+1;
                }
            }
            x=b;
            cout << x << endl;
    }
    return 0;
}
