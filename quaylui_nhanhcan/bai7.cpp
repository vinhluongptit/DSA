#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[1000];
int x[1000];
int tong = 0;
int tmp;
int ok = 0;

void ql(int i, int bd, int sum){
	for(int j = bd; j <= n; j++){
		if(sum + a[j] <= tmp){
			x[i] = a[i];
			if(sum + a[j] < tmp){
				ql(i+1, j+1, sum + a[j]);
			}else if(sum + a[j] == tmp){
				ok = 1;
			}
		}
	}
}

int main(){
	cin >> n;
	for(int i= 1; i <= n; i++){
		cin >> a[i];
		tong += a[i];
	}
	if(tong % 2 == 1) cout << "NO";
	else{
		tmp = tong/2;
		ql(1, 1, 0);
		if(ok == 1) printf("Yes");
		else printf("No");
	}
	
}
