#include <iostream>

using namespace std;

void setBit(int& n, int i) {
    n |= (1 << i);
}

void clearBit(int& n, int i) {
    n &= ~(1 << i);
}

int getBit(int n, int i) {
    return (n >> i) & 1;
}

int main() {
    int n, i;
    cin >> n >> i;

    int bit = getBit(n, i);
    cout << bit << endl;

    setBit(n, i);
    cout << n << endl;

    clearBit(n, i);
    cout << n << endl;

    return 0;
}

