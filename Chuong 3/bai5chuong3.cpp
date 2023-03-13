#include <bits/stdc++.h>

using namespace std;

double sumFactorial(long long n){
	double rs = 1.0;
    double gt = 1.0;
	for(long long i = 1; i <= n; i++){
		gt *= (double)1/i;
		rs += gt;
	}
	return rs;
}

int main(){
	long long n;
	cin >> n;
	cout << setprecision(2) << fixed << (double)sumFactorial(n);
}
