#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f[100000];


void sang(){
	for(int i = 0; i <= 100000; i++){
		f[i] = 1;
	}
	f[0] = f[1] = 0;
	for(int i = 2; i <= sqrt(100000); i++){
		if(f[i]){
			for(int j = i*i; j <= 100000; j += i){
				f[j] = 0;
			}
		}
	}
}

ll tong[100000];

int main(){
	sang();
	int t;
	cin >> t;
	int dem = 0;
	for(int i = 2; i <= 100000; i++){
		if(f[i]) dem++;
		tong[i] = dem;
	}
	while(t--){
		int l, r;
		cin >> l >> r;
		cout << tong[r] - tong[l-1] << endl;
	}
}	
