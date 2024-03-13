#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[100][100];
string s;

void ql(int i, int j){
	if(i == n && j == n){
		cout << s << " ";
		return;
	}
	if(i+1 <= n && a[i+1][j]){
		a[i+1][j] = 0;
		s += 'D';
		ql(i+1, j);
		a[i+1][j] = 1;
		s.pop_back();
	}
	if(j+1 <= n && a[i][j+1]){
		a[i][j+1] = 0;
		s += 'R';
		ql(i, j+1);
		a[i][j+1] = 1;
		s.pop_back();
	}
	if(i-1 <= n && a[i-1][j]){
		a[i-1][j] = 0;
		s += 'U';
		ql(i-1, j);
		a[i-1][j] = 1;
		s.pop_back();
	}
	if(j-1 <= n && a[i][j-1]){
		a[i][j-1] = 0;
		s += 'L';
		ql(i,j-1);
		a[i][j-1] = 1;
		s.pop_back();
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		s = "";
		for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j];
		}
		ql(1, 1);
		cout << endl;
	}
	
}
