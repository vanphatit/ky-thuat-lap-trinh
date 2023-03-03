#include<iostream>
using namespace std;

void input(int &n, int &m,int A[]);
void convert(int B[][100], int n, int m, int A[100]);
int main()
{
	int n,m;
	int A[100];
	int B[100][100];
	input(n,m,A);
	convert(B,n,m,A);
	return 0;
}
void input(int &n,int &m,int A[])
{
	cin>>m>>n;
	for(int i = 0;i < m*n;i++)
		cin >> A[i];
}
void convert(int B[][100], int n, int m, int A[100])
{
	int k = m*n-1;
	for(int i = m-1; i>=0; i--)
   		for(int j = n-1;j>=0; j--)
   		{
   			B[i][j] = A[k--];
		}
	for(int i=0;i<m;i++)
  	{
   		for(int j=0;j<n;j++)
     	{
      		cout<<B[i][j]<<" ";
 		}
 		cout<<endl;
  	}
}
