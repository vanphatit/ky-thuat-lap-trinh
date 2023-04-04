#include <bits/stdc++.h>

using namespace std;

int minPrime(int n);
bool isPrime(int n);
int A[10000];

int main(){
	int n;
	cin >> n;
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> A[index];
		if(isPrime(A[index])){
			index = index + 1;
		}
	}
	if(index > 0)
		cout << minPrime(index);
	else 
		cout << -1;
}

bool isPrime(int n){
	if(n <= 2) return (n == 2) ? true : false;
	for(int i = 2; i < sqrt(n); i++)
		if(n % i == 0)
			return false;
	return true;
}

int minPrime(int n){
	if(n == 1) return A[0];
	else
		if(A[n-1] < minPrime(n-1)){
			return A[n-1];
		} else return minPrime(n-1);
}
