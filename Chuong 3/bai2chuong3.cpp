#include <bits/stdc++.h>

using namespace std;

long long sum(long long n){
	long long rs = 1;
	for(int i = 2; i <= n; i++){
		rs += i*(i + 1) / 2;
	}
	return rs;
}

int main(){
	long long n;
	cin >> n;
	cout << sum(n);
}
