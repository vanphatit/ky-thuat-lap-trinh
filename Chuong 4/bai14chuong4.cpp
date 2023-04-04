#include<bits/stdc++.h>

using namespace std;

int A[8][8] = {0};
int X[8] = {-2,-2,-1,-1,1,1,2,2};
int Y[8] = {-1,1,-2,2,-2,2,-1,1};
int n,step = 0;

void output(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}

void move(int x, int y){
	++step;
	A[x][y] = step;
	for(int i = 0; i < 8; i++)
	{
		if(step == n*n){
			output();
			exit(0);
		}
		int u = x + X[i];
		int v = y + Y[i];
		if(u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 0)
			move(u,v);
	}
	--step;
	A[x][y] = 0;
}

int main(){
	cin >> n;
	int x,y;
	cin >> x >> y;
	move(x,y);
}
