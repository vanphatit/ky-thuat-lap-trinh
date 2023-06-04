#include<iostream>
#define size 100

using namespace std;

int n; int a[size][size];

void output(int i){
	for (int j=1; j<=i; j++)
		cout<<a[i][j]<<" ";
	cout<<endl;
}

void Ptriangle(){
	for (int i=2; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
		{
			a[i][j] = a[i-1][j-1] + a[i-1][j];
		}
		output(i);
	}
}

int main()
{
	cin>>n;
	a[1][1]=1;
	cout << a[1][1] << endl;
	Ptriangle();
	return 0;
}
