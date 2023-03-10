#include <bits/stdc++.h>

using namespace std;

long long sumFactorial(long long n){
	long long rs = 1;
	long long gt;
	for(int i = 2; i <= n; i++){
		gt = 1;
		for(int j = 1; j <= i; j++){
			gt *= j;
		}
		rs += gt;
	}
	return rs;
}

int main(){
	long long n;
	cin >> n;
	cout << sumFactorial(n);
}
