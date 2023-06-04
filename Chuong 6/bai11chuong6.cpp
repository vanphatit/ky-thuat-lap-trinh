#include <bits/stdc++.h>

using namespace std;

int n;
int A[1001];
int B[1001] = {0};

void maxLArray(){
	for(int i = 0; i < n; i++){
		B[i] = 1;
		for(int j = 0; j < i; j++){
			if(A[j] <= A[i] && B[i] < B[j] + 1)
				B[i] = B[j]+1;
		}
	}
	cout << B[n-1];
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> A[i];
	A[0] = -999999;
	A[n+1] = 999999;
	maxLArray();
}
