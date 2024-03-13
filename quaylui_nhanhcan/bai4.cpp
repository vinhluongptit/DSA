#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define ms(s,n) memset(s,n,sizeof(s))
string s;
int a[1000];
int n;
bool used[100];

void nhap(){
	cin >> s;
	n = s.size(); 
	memset(used, 0, sizeof(used));
}

void ql(int i){
	for(int j = 0; j < n; j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == n - 1){
				for(int i=0;i<n;i++){
					cout<<s[a[i]];
				}
				cout<<" ";
			}else{
				ql(i + 1);
			}
				used[j] = false;
			
		}
		
	}
}

int main(){
	nhap();
	ql(0);
}
