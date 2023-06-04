#include<iostream>

using namespace std;

void multiply(int n, int a[][100], int b[][100], int result[][100])
{
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			result[i][j] = 0;
			for (int k=0; k<n; k++)
			{
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}

int main()
{
	int a[100][100], b[100][100];
	int n; 
	int result[100][100] = {};
	
	cin >> n;
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cin >> a[i][j];
		}
	}
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cin >> b[i][j];
		}
	}
	
	multiply(n, a, b, result);
	
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<n; j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
