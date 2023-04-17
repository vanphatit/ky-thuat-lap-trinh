#include<bits/stdc++.h>

using namespace std;

int A[10000];
int n;

int main(){
	cin >> n;
	int min = INT_MAX;
	int max = 0;
	for(int i = 0; i < n; i++){
		cin >> A[i];
		if(A[i] % 2 == 0 && max < A[i])
			max = A[i];
	}
	for(int i = 0; i < n; i++){
		if(A[i] % 2 != 0 && A[i] > max && min > A[i]){
			min = A[i];
		}
	}
	if(min == INT_MAX)
		cout << -1;
	else
		cout << min;
}
