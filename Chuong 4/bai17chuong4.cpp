#include <bits/stdc++.h>

using namespace std;

void crBinary(int n, int A[], int index);

int sumMin = INT_MAX;
int countA, countB, sumA, sumB = 0;
int B[1000], C[1000];
char D[1000];

int main(){
	int n;
	cin >> n;
	int A[n];
	for(int i = 0; i < n; i++)
		cin >> B[i];
	for(int i = 0; i < n; i++)
		cin >> C[i];
	crBinary(n,A,0);
	cout << sumMin << endl;
	for(int i = 0; i <= n; i++)
		cout << D[i] << " ";
}

void crBinary(int n, int A[], int index){
	if(index == n){
		for(int i = 0; i < n; i++){
			if(A[i] == 0){
				sumA += B[i];
				countA += 1;
			}
			else if(A[i] == 1){
				sumB += C[i];
				countB += 1;
			}
		}
		if(countA >= countB && sumMin > sumA){
			sumMin = sumA;
			for(int i = 0; i < n; i++){
				if(A[i] == 0){
					D[i] = 'A';
				}
				else if(A[i] == 1){
					D[i] = 'B';
				}
			}
		}
			
		else if(countB > countA && sumMin > sumB)
		{
			sumMin = sumB;
			for(int i = 0; i < n; i++){
				if(A[i] == 0){
					D[i] = 'A';
				}
				else if(A[i] == 1){
					D[i] = 'B';
				}
			}
		}
		countA = countB = sumA = sumB = 0;	
		return;
	}
	A[index] = 0;
	crBinary(n,A,index+1);
	A[index] = 1;
	crBinary(n,A,index+1);
}
