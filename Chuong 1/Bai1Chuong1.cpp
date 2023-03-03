#include<bits/stdc++.h>

using namespace std;

struct HOCSINH
{
	char mshs[6];
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
	int count = 0;
	nhapFile(n,hs);
	for(int i = 0; i < n; i++){
		if(hs[i].diemtb >= 5.0)
			count += 1;
		xuatFile(hs[i]);
	}
	cout << count;
	return 0;
}

void nhapFile(int &n, HOCSINH hs[50]){
	
	cin >> n;
	for (int i = 0; i < n; i++) {
        cin.ignore(1);
		gets(hs[i].mshs);
		gets(hs[i].hoten);
		gets(hs[i].ngaysinh);
		gets(hs[i].diachi);
		gets(hs[i].phai);
		float dtb;
		cin >> dtb;
		hs[i].diemtb = dtb;
    }
}

void xuatFile(HOCSINH hs){
	cout << hs.mshs <<endl;
	cout << hs.hoten <<endl;
	cout << hs.ngaysinh<<endl;
	cout << hs.diachi<<endl;
	cout << hs.phai<<endl;
	if(hs.diemtb - (int)hs.diemtb>0)
		 cout << hs.diemtb<<endl;
	else
		cout << hs.diemtb<<".0"<<endl;
}
