#include <bits/stdc++.h>

using namespace std;

void input(int &m, int &n, float A[100][100]);
void findXmin(int m, int n, float A[100][100]);

int main(){
	int m,n;
	float A[100][100];
	input(m,n,A);
	findXmin(m,n,A);
}

void input(int &m, int &n, float A[100][100]){
	cin >> m >> n;
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= n; j++)
			cin >> A[i][j];
}

void findXmin(int m, int n, float A[100][100]){
	int x,y;
	float Xmin = 100001;
	for(int i = 0; i <= m + 1; i++)
		A[i][0] = A[i][n+1] = -999999;
	for(int j = 0; j <= n + 1; j++)
		A[0][j] = A[m+1][j] = -999999;
//	for(int i = 0; i <= m+1; i++){
//		for(int j = 0; j <= n+1;j++)
//			cout << A[i][j] << " ";
//		cout << endl;
//	}
	for(int i = 1; i <= m; i++)
		for(int j = 1; j <= n; j++){
			if(A[i][j] > A[i+1][j] && A[i][j] > A[i-1][j] && A[i][j] > A[i][j-1] && A[i][j] > A[i][j+1]){
				if(Xmin > A[i][j]){
					Xmin = A[i][j];
					x = i; y = j;
				}
			}
		}
	if(Xmin == 100001)
		cout << -1;
	else
		cout << x - 1 << " " << y - 1;
}
