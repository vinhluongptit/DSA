#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[100][100];
vector<string> v;
string s;
int ok = 0;

void ql(int i, int j){
	if(i == n && j == n){
		ok = 1;
//		v.push_back(s);
		cout << s << " ";
	}
	if(i + 1 <= n && a[i+1][j]){
		s += 'D';
		a[i+1][j] = 0;
		ql(i+1,j);
		s.pop_back();
		a[i+1][j] = 1;
	}
	if(j + 1<= n && a[i][j+1]){
		s+= 'R';
		a[i][j+1] = 0;
		ql(i,j+1);
		s.pop_back();
		a[i][j+1] = 1;
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	ql(1, 1);
	if(ok == 0) cout << -1;
	
}
