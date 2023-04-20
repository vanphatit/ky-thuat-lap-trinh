#include <bits/stdc++.h>

using namespace std;

bool A[100000];
int main(){
	int n;
	cin >> n;
	
	int i;
	for(i = 2; i < n; i++){
		A[i] = true;
	}
	
	for(i = 2; i <= sqrt(n); i++)
		if(A[i] == true)
			for(int j = i * i; j <= n; j+=i)
				A[j] = false;
	for (int i = 2; i < n; i++) {
        if (A[i] == true) {
            cout << i << " ";
        }
    }
}
