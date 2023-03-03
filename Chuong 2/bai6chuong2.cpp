#include <bits/stdc++.h>

using namespace std;

void input(int &n, int A[], int B[]);
void merge(int n, int A[], int B[]);

int main(){
	int n;
	int A[100], B[100];
	input(n,A,B);
	merge(n,A,B);
}

void input(int &n, int A[], int B[])
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
	for(int i = 0; i < n; i++)
		cin >> B[i];
}

void merge(int n, int A[], int B[]){
	int index = 0;
	int C[200];
	for(int i = 0; i < n; i++){
		if(i >= n){
			C[index] = B[i];
			index += 1;
		}
		else if(i >= n){
			C[index] = A[i];	
			index += 1;
		}
		else {
			C[index] = A[i];
			C[index + 1] = B[i];
			index += 2;
		}
	}
	
	for(int i = 0; i < index; i++){
		cout << C[i] << " ";	
	}
}
