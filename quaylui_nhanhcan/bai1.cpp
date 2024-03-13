#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k, s;
int ans = 0;
int x[100];

void ql(int i, int bd, int sum){
	if(i == k && sum == s){
		ans++;
		return;
	}
	for(int j = bd;  j <= n; j++){
		if(sum + j <= s){
			x[i] = j;
			ql(i+1, j + 1, sum + j);
		}
	}
}

int main(){
	cin >> n >> k >> s;
	ql(0, 1, 0);
	cout << ans;
}
