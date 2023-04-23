#include <bits/stdc++.h>

using namespace std; 

void permutation(int n);
void output(int A[], int n);
void reverseArr(int A[], int x, int y);

int main(){
	int n;
	cin >> n;
	permutation(n);
}

void permutation(int n){
	int A[20];
	for(int i = 0; i < n; i++)
		A[i] = i;
	output(A,n);
	do{
		int k = n-2;
		while(k >= 0 && A[k] > A[k+1])
			k--;
		if(k < 0)
			break;
		int l = n-1;
		while(A[l] < A[k])
			l--;
		swap(A[k],A[l]);
		reverseArr(A,k+1,n-1);
		output(A,n);
	} while(true);
}

void reverseArr(int A[], int x, int y){
	while(x < y){
		swap(A[x], A[y]);
		x++;
		y--;
	}
}

void output(int A[], int n){
	for(int i = 0; i < n; i++){
		cout << A[i] << " ";
	}
	cout << endl;
}
