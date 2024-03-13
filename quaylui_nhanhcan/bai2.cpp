#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[1000];

void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
}

void ql(int i){
	if(i == 0){
		return;
	}
	cout << "[";
	for(int j = 1; j <= i; j++){
		cout << a[j] ;
		if(j != i) cout << " ";
	}
	for(int j = 1; j < i; j++){
		a[j] = a[j] + a[j+1];
	}
	cout << "]";
	cout << endl;
	ql(i-1);
}

int main(){
	nhap();
	ql(n);
}
