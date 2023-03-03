#include<bits/stdc++.h>

using namespace std;

void input(int &n, int &x, int &b, int &c, int &d, int &e, int &f, int A[]);
void add(int &n, int x, int index, int A[]);
void del(int &n, int index, int A[]);
void edit(int n, int x, int index, int A[]);
void findX(int n, int x, int A[]);
void outputArray(int n, int A[]);

int main(){
	int n,x,b,c,d,e,f;
	int A[1000];
	input(n, x, b, c, d, e, f, A);
	add(n,c,b,A);
	cout << endl;
	edit(n,e,d,A);
	cout << endl;
	del(n,f,A);
	cout << endl;
	findX(n, x, A);
	return 0;
}

void input(int &n, int &x, int &b, int &c, int &d, int &e, int &f, int A[]){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	cin >> b >> c >> d >> e >> f >> x;
}

void add(int &n, int x, int index, int A[]){
	for(int i = n; i > index; i--){
		A[i] = A[i - 1];
	}
	n += 1;
	A[index] = x;
	outputArray(n,A);
}

void findX(int n, int x, int A[]){
	A[n] = x;
	int i = 0;
	while(A[i] != x)
		i++;
	if(i<n)
		cout << i;
	else
		cout << -1;
}

void del(int &n, int index, int A[]){
	for(int i = index; i < n - 1; i++){
		A[i] = A[i + 1];
	}
	n -= 1;
	outputArray(n,A);
}
void edit(int n, int x, int index, int A[]){
	A[index] = x;
	outputArray(n,A);
}

void outputArray(int n, int A[]){
	for(int i = 0; i < n; i++){
		cout << A[i] << " ";
	}
}
