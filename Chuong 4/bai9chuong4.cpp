#include <bits/stdc++.h>

using namespace std;
int A[10000];

int UCLN(int A[], int n){
    if (n == 0) {
        return -1;
    }
    if(n == 1)
        return A[0];
    else {
        int b = UCLN(A, n - 1);
        int a = A[n - 1];
        int minVal = min(a, b); 
        for(int i = minVal; i > 0; i--){
            if(a % i == 0 && b % i == 0)
                return i;
        }
        return 1;
    }       
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    cout << UCLN(A, n);
    return 0;
}

