#include <bits/stdc++.h>

using namespace std;

long long nCk(int n, int k);
long long giaithua(int n);

int main(){
	int n,k;
	cin >> n >> k;
	cout << nCk(n,k);
}

long long nCk(int n, int k){
	if(k==0||k==n)
		return 1;
	else
		return nCk(n-1,k) + nCk(n-1,k-1);
}
