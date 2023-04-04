#include<bits/stdc++.h>

using namespace std;

void input(int &n, int &x, int A[100000]);
int binarySearch(int x, int left, int right, int A[100000]);
void quickSort(int A[], int left, int right);

int main(){
	int n,x;
	int A[100000];
	input(n,x,A);
	quickSort(A,0,n);
	int rs = binarySearch(x, 0, n-1, A);
	cout << rs;
}

void input(int &n, int &x, int A[100000]){
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
}

int binarySearch(int x, int left, int right, int A[100000]){
	if(right >= left){
		int mid = left + (right-left) / 2;
		if(A[mid] == x)
			return mid;
		if(A[mid] > x)
			return binarySearch(x, mid+1, right, A);
		if(A[mid] < x)
			return binarySearch(x, left, mid-1, A);
	}
	return -1;
}

void quickSort(int A[], int left, int right){
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
