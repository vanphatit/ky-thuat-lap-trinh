#include <bits/stdc++.h>

using namespace std;

double sumFactorial(long long n){
	double rs = 1.0;
	double gt;
	for(int i = 1; i <= n; i++){
		gt = 1.0;
		for(int j = 1; j <= i; j++){
			gt *= 1.0 / j;
		}
		rs += gt;
	}
	return rs;
}

int main(){
	long long n;
	cin >> n;
	cout << setprecision(2) << fixed << (double)sumFactorial(n);
}
