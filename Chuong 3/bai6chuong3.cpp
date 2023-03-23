#include <bits/stdc++.h>

using namespace std;

long double sumFactorial(long long n, long long x){
	long double rs = 1.0;
    long double gt = 1.0;
	for(long long i = 1; i <= n; i++){
		gt = gt * (long double)x/i;
		rs = rs + gt;
	}
	return rs;
}

int main(){
	long long n,x;
	cin >> n >> x;
	cout << setprecision(2) << fixed << (long double)sumFactorial(n,x);
}
