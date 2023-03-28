#include <iostream>
#include <climits>

using namespace std;

int main() {
	const int MAX_SIZE = 100000;
    int A[MAX_SIZE], n;
    cin >> n;
    int minE = 999999;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        if(A[i] <= minE)
        	minE = A[i];
    }

    int max = 0;
    int current = 1;
    int most = INT_MAX;

    int fre[MAX_SIZE];
    fill_n(fre, MAX_SIZE, 0);

    for (int i = 0; i < n; i++) {
        fre[A[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (fre[A[i]] != -1) {
            if (fre[A[i]] > max) {
                max = fre[A[i]];
                most = A[i];
            } else if (fre[A[i]] == max && A[i] < most) {
                most = A[i];
            }
            fre[A[i]] = -1;
        }
    }

    if (max == 1) {
        cout << minE;
    } else {
        cout << most;
    }

    return 0;
}

