#include<bits/stdc++.h>

using namespace std;

void input(int &n, int &x, int A[100000]);
void findX(int n, int x, int A[100000]);

int main(){
	int n,x;
	int A[100000];
	input(n,x,A);
	findX(n,x,A);
}

void input(int &n, int &x, int A[100000]){
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
}

void findX(int n, int x, int A[100000]){
	A[n] = x;
	int i = 0;
	while(A[i] != x)
		i++;
	if(i<n)
		cout << i;
	else
		cout << -1;
}
