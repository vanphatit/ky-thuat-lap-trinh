#include<bits/stdc++.h>

using namespace std;

void input(int &n, int &m, int A[][100]);
void convert(int n, int m, int A[][100]);

int main(){
	int n,m;
	int A[100][100];
	input(n,m,A);
	convert(n,m,A);
}

void input(int &n, int &m, int A[][100]){
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> A[i][j];
}
void convert(int n, int m, int A[][100]){
	int B[n*m];
	int index = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++){
			B[index++] = A[i][j];
			// index += 1;
	    }
	for(int i = 0; i < index; i++)
		cout << B[i] << " ";
}
