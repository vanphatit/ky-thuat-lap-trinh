#include <iostream>
using namespace std;

long long F(long long n) {
    if (n == 0 || n == 1) {
        return n;
    } else if (n % 2 == 0) {
        return F(n / 2);
    } else {
        return F((n-1) / 2) + F((n+1) / 2);
    }
}

int main() {
    long long n;
    cin >> n;
    cout << F(n);
    return 0;
}
