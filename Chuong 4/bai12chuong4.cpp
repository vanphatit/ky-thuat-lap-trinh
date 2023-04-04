#include <bits/stdc++.h>
#include <climits>

using namespace std;

void output(int A[], int n);
void crChildList(int n, int A[], int index, int size);

int main(){
	int n;
	cin >> n;
	int A[n];
	crChildList(n,A,-1,0);
}

void output(int A[], int n){
	for(int i = 0; i < n; i++){
		cout << A[i] << " ";
	}
	cout << endl;
}

void crChildList(int n, int A[], int index, int size){
	if(index == n-1)
	{
		output(A,size);
		return;
	}
	A[size] = index + 1;
	crChildList(n,A,index+1,size+1);
	crChildList(n,A,index+1,size);
}
