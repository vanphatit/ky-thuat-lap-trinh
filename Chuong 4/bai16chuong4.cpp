#include <bits/stdc++.h>

using namespace std;

void output(int A[], int n);
void tsp(int index);

int A[10],D[10];
int n,C[10][10];
long long min_n = INT_MAX;
long long sum = 0;
bool B[1000] = {false};

int main(){
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> C[i][j];
	tsp(0);
	cout << min_n << endl;
	for(int i = 0; i <= n; i++)
		cout << D[i] << " ";
}

void tsp(int index){
	if(index == n)
	{
		int i;
		for(i = 0; i < n - 1; i++){
			sum += C[A[i]][A[i+1]];
		}
		sum += C[A[n-1]][A[0]];
		if(min_n >= sum){
			min_n = sum;
			for(i = 0; i < n; i++)
				D[i] = A[i];
		}
		D[n] = D[0];
			
		sum = 0;
	}
	else {
		for(int i = 0; i < n; i++)
			if(!B[i]){
				A[index] = i;
				B[i] = true;
				tsp(index+1);
				B[i] = false;
			}
	}
}
