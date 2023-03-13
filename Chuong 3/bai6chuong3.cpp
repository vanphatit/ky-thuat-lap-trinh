#include <bits/stdc++.h>

using namespace std;

double sumFactorial(long long n, long long x){
	double rs = 1.0;
    double gt = 1.0;
	for(long long i = 1; i <= n; i++){
		gt *= (double)x/i;
		rs += gt;
	}
	return rs;
}

int main(){
	long long n,x;
	cin >> n >> x;
	cout << setprecision(2) << (double)sumFactorial(n,x);
}
