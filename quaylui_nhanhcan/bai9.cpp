#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int cot[100];
int cheo1[100], cheo2[100];
int cnt;
int tmp;
void ql(int i){
	if(i == n && tmp == n){
		cnt++;
		return;
	}
	for(int j = 1; j <= n; j++){
		if(cot[j] && cheo1[i+j-1] && cheo2[i-j+n]){
			tmp++;
			cot[j] = 0;
			cheo1[i+j-1] = 0;
			cheo2[i-j+n] = 0;
			ql(i+1);
			cot[j] = 1;
			cheo1[i+j-1] = 1;
			cheo2[i-j+n] = 1;
		}
	}
}

int main(){
	cin >> n ;
	cnt = 0;
	tmp = 0;
	for(int i = 1; i <= 100; i++){
		cot[i] = cheo1[i] = cheo2[i] = 1;
	}
	ql(1);
	cout << cnt;
	
}
