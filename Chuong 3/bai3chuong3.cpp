#include <bits/stdc++.h>

using namespace std;

double sum(long long n){
	double rs = 1.0;
	for(int i = 2; i <= n; i++){
		rs += 1.0 / (i*(i + 1) / 2);
	}
	return rs;
}

int main(){
	long long n;
	cin >> n;
	cout << setprecision(7) << (double)sum(n);
}
