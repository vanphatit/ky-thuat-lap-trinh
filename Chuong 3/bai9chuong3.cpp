#include <bits/stdc++.h>

using namespace std;

void quickSort(long long A[], int left, int right);

int main(){
	int n,x;
	long long A[100000];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	cin >> x;
	quickSort(A, 0, n-1);
	int index = 0;
	
	for(int i = 0; i < n; i++){
		if(A[i] <= x){
			index = i;
			break;
		}
	}
	
	for(int i = n; i > index; i--)
		A[i] = A[i-1];
	A[index] = x; n += 1;
	
	for(int i = 0; i < n; i++){
    	cout << A[i] << " ";
	}
	return 0;
}

void quickSort(long long A[], int left, int right){
	if(left >= right){
		return;
	}
	int pivot = A[(left+right)/2];
	int i = left, j = right;
	while(i <= j){
    	while(A[i] > pivot){
        	i++;
    	}
    	while(A[j] < pivot){
        	j--;
    	}
    	if(i <= j){
        	swap(A[i], A[j]);
        	i++;
        	j--;
    	}	
	}
	quickSort(A, left, j);
	quickSort(A, i, right);
}
