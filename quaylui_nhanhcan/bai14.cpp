
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, x;
int a[100];
int b[100];

void ql(int i, int sum, int bd){
	if(sum > x) return;
	if(sum == x){
		cout << "[";
		for(int u = 1; u < i; u++){
			cout << b[u];
			if(u != i - 1) cout << " ";
		}
		cout << "]";
		cout << endl;
	}
	for(int j = bd; j <= n; j++){
		b[i] = a[j];
		sum+= a[j];
		ql(i+1, sum, j);
		sum -= a[j];
	}
}

int main(){
	cin >> n >> x;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	ql(1, 0, 1);
	
}
