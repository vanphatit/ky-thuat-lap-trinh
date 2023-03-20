#include <bits/stdc++.h>

using namespace std;

long long giaithua(long long n);

int main(){
	long long n;
	cin >> n;
	cout << giaithua(n);
}

long long giaithua(long long n){
	if(n == 0)
		return 1;
	else 
		return giaithua(n-1)*n;
}
