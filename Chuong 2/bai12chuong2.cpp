#include <bits/stdc++.h>

using namespace std;

void input(int &n, float A[100][100]);
void createMatrix(int n, float A[100][100]);

int main(){
	int n;
	float A[100][100];
	input(n,A);
	createMatrix(n,A);
}

void input(int &n, float A[100][100]){
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			cin >> A[i][j];
			if(A[i][j] == 1)
				A[i][j] = -1;
		}
}

void createMatrix(int n, float A[100][100]){
	int X[8] = {-1,-1,-1,0,1,1,1,0};
	int Y[8] = {-1,0,1,1,1,0,-1,-1};
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if(A[i][j] == 0)
				for(int k = 0; k < 8; k++)
				if(A[i+X[k]][j+Y[k]] == -1)
					A[i][j]++;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
		
}
