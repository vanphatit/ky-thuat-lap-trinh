#include <iostream>
using namespace std;

void genSubsets(int n, int* arr, int len, int pos) {
    if (pos == n) {
        for (int i = 0; i < len; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    genSubsets(n, arr, len, pos + 1);
    arr[len] = pos + 1;
    genSubsets(n, arr, len + 1, pos + 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    genSubsets(n, arr, 0, 0);
    return 0;
}

