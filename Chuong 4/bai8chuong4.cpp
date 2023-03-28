#include <bits/stdc++.h>

using namespace std;

int minPrime(int n);
bool isPrime(int n, int i);
int A[10000];

int main(){
	int n;
	cin >> n;
	int index = 0;
	
	for(int i = 0; i < n; i++)
	{
		cin >> A[index];
		if(isPrime(A[index], A[index]))
			index = index + 1;
	}
	cout << minPrime(index);
}

bool isPrime(int n, int i){
	if(n <= 2) return (n == 2) ? true : false;
	if(n % i == 0) return false;
	if(i * i > n) return true;
	return isPrime(n, i + 1);
}

int minPrime(int n){
	if(n == 1) return A[0];
	else
		if(A[n-1] < minPrime(n-1)){
			return A[n-1];
		} else return minPrime(n-1);
}
