#include<iostream>
using namespace std;

int main()
{
	int n; 
	int a[100000], b[100000];
	cin>>n;
	
	for (int i=0; i<n; i++)
	{
		cin>>a[i];
		b[a[i]]+=1;
	}
		
	for (int i=0; i<n; i++)
	{
		if (b[a[i]] > 0)
		{
			cout<< a[i] << " ";
			b[a[i]] = 0;
		}
	}
	return 0;
}
