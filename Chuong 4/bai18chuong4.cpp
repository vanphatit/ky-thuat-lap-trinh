#include <bits/stdc++.h>

using namespace std;

void crBinary(int n, int A[], int index);

int k = 0;
int cnt, cntMax = 0;

int main(){
	int n;
	cin >> n >> k;
	int A[n];
	crBinary(n,A,0);
}

void crBinary(int n, int A[], int index){
	if(index == n){
		if(A[0] == 1 || A[n-1] == 0)
			return;
		for(int i = 0; i < n; i++){
			if(A[i] == 0){
				cnt += 1;
			}
			else if(A[i] == 1){
				cnt -= 1;
			}
			if(cntMax <= cnt)
				cntMax = cnt;
		}
		if(cnt == 0 && cntMax == k){
			for(int i = 0; i < n; i++){
				if(A[i] == 0){
					cout << "(";
				}
				else if(A[i] == 1){
					cout << ")";
				}
			}
			cout << endl;
		}
		
		cnt = cntMax = 0;	
		return;
	}
	A[index] = 0;
	crBinary(n,A,index+1);
	A[index] = 1;
	crBinary(n,A,index+1);
}
