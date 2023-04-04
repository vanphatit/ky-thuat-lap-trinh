#include <bits/stdc++.h>
#include <climits>

using namespace std;

void output(int A[], int n);
void listSwap(int index);

int n,A[1000];
bool B[1000] = {false};

int main(){
	cin >> n;
	listSwap(0);
}

void output(int A[], int n){
	for(int i = 0; i < n; i++){
		cout << A[i] << " ";
	}
	cout << endl;
}

void listSwap(int index){
	if(index == n)
	{
		output(A,n);
	}
	else {
		for(int i = 0; i < n; i++)
			if(!B[i]){
				A[index] = i;
				B[i] = true;
				listSwap(index+1);
				B[i] = false;
			}
	}
}
