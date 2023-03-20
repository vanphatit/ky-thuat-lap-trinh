#include <bits/stdc++.h>

using namespace std;

int A[1000];
int sum(int n);

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
	cout << sum(n);
}

int sum(int n){
	if(n == 1)
		return A[0];
	else 
		return sum(n-1) + A[n-1];
}
