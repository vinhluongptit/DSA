#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int a[1000][1000];

void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[n][i];
	}
}

void ql(int i){
	if(i == 0) return ;
	for(int j = 1; j <= i; j++){
		a[i][j] += a[i+1][j] + a[i+1][j+1]; 
	}
	ql(i - 1);
}

int main(){
	nhap();
	ql(n);
	for(int i=1;i<=n;i++){
		cout<<"[";
		for(int j=1;j<=i;j++){
			cout<<a[i][j];
			if(j!=i) cout<<" ";
		}
		cout<<"] ";
		cout << endl;
	}
	
}

