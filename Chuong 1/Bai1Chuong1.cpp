#include<bits/stdc++.h>

using namespace std;

struct HOCSINH
{
	char mshs[5];
	char hoten[31];
	char ngaysinh[11];
	char diachi[51];
	char phai[4];
	float diemtb;
};

#define SIZE 100

void nhapFile(int &n, HOCSINH hs[50]);
void xuatFile(HOCSINH hs);

int main(){
	HOCSINH hs[50];
	int n;
	nhapFile(n,hs);
	for(int i = 0; i < n; i++){
		xuatFile(hs[i]);
	}
	return 0;
}

void nhapFile(int &n, HOCSINH hs[50]){
	
	cin >> n;
	cin.ignore();
	
	for(int i = 0; i < n; i++)
	{
		fflush(stdin);
		gets(hs.mshs);
		fflush(stdin);
		gets(hs.hoten);
		cin >> hs.ngaysinh;
		fflush(stdin);
		gets(hs.diachi);
		fflush(stdin);
		gets(hs.phai);
		cin >> hs.diemtb;
	}
}

void xuatFile(HOCSINH hs){
	cout << hs.mshs <<endl;
	cout << hs.hoten <<endl;
	cout << hs.ngaysinh<<endl;
	cout << hs.diachi<<endl;
	cout << hs.phai<<endl;
	if(hs.diemtb - (int)hs.diemtb>0)
		 cout << hs.diemtb;
	else
		cout << hs.diemtb<<".0";
}
