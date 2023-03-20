#include <bits/stdc++.h>

using namespace std;

int Min(int n);
int A[1000];

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
	int min = Min(n);
	cout<<min;
}
int Min(int n)
{
	if(n == 1)
		return A[0];
	else
	{
		if(A[n-1] < Min(n-1))
			return A[n-1];
		else
			return Min(n-1);
	}
}
