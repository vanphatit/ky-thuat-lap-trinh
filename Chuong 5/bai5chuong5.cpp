#include <iostream>

using namespace std;

int bitcount(unsigned int n) {
    int cnt = 0;
    while (n > 0) {
        cnt += n & 1;
        n >>= 1;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;

	cout << bitcount(n);

    return 0;
}

