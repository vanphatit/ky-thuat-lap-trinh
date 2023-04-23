#include <iostream>
using namespace std;

void genSubsets(int n, int k, int* arr, int len, int pos) {
    if (len == k) {
        for (int i = 0; i < len; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    if(pos == n)
    	return;
    arr[len] = pos + 1;
    genSubsets(n, k, arr, len+1, pos + 1);
    genSubsets(n, k, arr, len, pos + 1);
}

int main() {
    int n,k;
    cin >> n >> k;
    int arr[n];
    genSubsets(n, k, arr, 0, 0);
    return 0;
}

