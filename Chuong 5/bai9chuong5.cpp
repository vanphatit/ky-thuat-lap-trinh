#include<iostream>
using namespace std;
void input(int &m, int &n, int A[][100]);
bool isMaxLine(int n, int A[][100], int x, int y);
bool isMinRow(int m, int A[][100], int x, int y);
bool isYN(int m, int n, int A[][100], int x, int y);
void findYN(int m, int n, int A[][100]);
void output(int dem);
int main()
{
	int col,row;
	int A[100][100];
	input(row,col,A);
	findYN(row,col,A);
	return 0;
}

bool isMinRow(int m,int A[][100], int x, int y)
{
	for(int i=0; i<m; i++)
		if(A[i][y]<A[x][y])
			return false;
	return true;
}

bool isMaxLine(int n, int A[][100], int x, int y)
{
	for(int j=0; j<n; j++)
		if(A[x][j]>A[x][y])
			return false;
	return true;
}
bool isYN(int m, int n, int A[][100], int x, int y)
{
	if(isMaxLine(n,A,x,y) && isMinRow(m,A,x,y))
		return true;
	return false;
}

void findYN(int m, int n, int A[][100])
{
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			if (isYN(m,n,A,i,j))
				cout << A[i][j] << " ";
}

void input(int &m, int &n, int A[][100])
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>A[i][j];
}
