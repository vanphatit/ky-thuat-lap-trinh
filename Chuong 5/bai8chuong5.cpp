#include <bits/stdc++.h>

using namespace std;

char A[1000];

bool isSymmetry(){
	int len = strlen(A);
	for(int i = 0; i < len; i++){
		if(A[i] != A[len-i-1])
			return false;
	}
	return true;
}

int main(){
	gets(A);
	if(isSymmetry())
		cout << 1;
	else
		cout << 0;
}
