#include <bits/stdc++.h>

using namespace std;

long long exponent(int x, int p){
	long long rs = 1;
	for(int i = 0; i < p; i++){
		rs *= x;
	}
	return rs;
}

int main(){
	int x, p;
	cin >> x >> p;
	cout << exponent(x,p);
}
