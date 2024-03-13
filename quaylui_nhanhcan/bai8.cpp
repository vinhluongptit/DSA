#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
int a[100][100];
int cnt = 0;

void ql(int i, int j){
	if(i == n && j == m){
		cnt++;
		return;
	}
	if(i+1 <= n){
		ql(i+1,j);
	}
	if(j+1 <= m){
		ql(i, j+1);
	}
}

int main(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++) cin >> a[i][j];
	}
	ql(1,1);
	cout << cnt;
	
}
