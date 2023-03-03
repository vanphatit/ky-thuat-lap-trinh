#include<bits/stdc++.h>

using namespace std;

void toBin(int n, int &nBin, int Bin[]);
void toOctal(int n, int &nOct, int Octal[]);
void toHexa(int n, char hexa[]);
void input(int &n);
void output(int nBin, int Bin[], int nOct, int Octal[], char hexa[]);

int main()
{
	int n, nBin, nOct;
	char hexa[20];
	int Bin[100], Octal[100];
	input(n);
	toBin(n,nBin,Bin);
	toOctal(n,nOct,Octal);
	toHexa(n,hexa);
	output(nBin,Bin,nOct,Octal,hexa);
	return 0;
}

void input(int &n)
{
	cin>>n;
}

void toBin(int n, int &nBin, int Bin[])
{
	nBin=0;
	while(n>0)
	{
		Bin[nBin++]=n%2;
		n=n/2;
	}
}

void toOctal(int n, int &nOct, int Octal[])
{
	nOct=0;
	while(n>0)
	{
		Octal[nOct++]=n%8;
		n=n/8;
	}
}

void toHexa(int n, char hexa[])
{
	int cnt=0;
	while(n>0)
	{
		int x=n%16;
		n=n/16;
		if(x<10)
			hexa[cnt]=x+'0';
		else
			hexa[cnt]=x+55;
		cnt++;	
	}
	hexa[cnt]='\0';
	strrev(hexa);
}

void output(int nBin, int Bin[], int nOct, int Octal[], char hexa[])
{
	for(int i=nBin-1; i>=0; i--)
		cout<<Bin[i];
		cout<<"\n";
	for(int j=nOct-1; j>=0; j--)
		cout<<Octal[j];
		cout<<"\n";
	cout<<hexa;
}
