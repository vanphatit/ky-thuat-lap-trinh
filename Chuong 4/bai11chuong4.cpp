#include <bits/stdc++.h>

using namespace std;

void output(int A[], int n);
void crBinary(int n, int A[], int index);

int main(){
	int n;
	cin >> n;
	int A[n];
	crBinary(n,A,0);
}

void output(int A[], int n){
	for(int i = 0; i < n; i++)
		cout << A[i];
	cout << endl;
}

void crBinary(int n, int A[], int index){
	if(index == n){
		output(A,n);
		return;
	}
	A[index] = 1;
	crBinary(n,A,index+1);
	A[index] = 2;
	crBinary(n,A,index+1);
	A[index] = 3;
	crBinary(n,A,index+1);
}
