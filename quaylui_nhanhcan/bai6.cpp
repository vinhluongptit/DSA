#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ms(s,n) memset(s,n,sizeof(s))

int n, k;
int a[1000];
int x[1000];

void ql(int i,int bd, int sum){
	for(int j = bd; j <= n; j++){
		if(sum + a[j] <= k){
			x[i] = a[j];
			if(sum + a[j] < k){
				ql(i+1,j+1,sum + a[j]);
			}else if(sum + a[j] == k){
				cout << "[";
				for(int u = 1; u <= i; u++){
					cout << x[u];
					if(u != i) cout << " ";
				}
				cout << "]";
			}
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	ql(1, 1, 0);
}
