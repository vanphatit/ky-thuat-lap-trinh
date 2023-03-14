#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n;
	cin >> n;
	if(n <= 0) {
        cout << -1;
        return 0;
    }
    long long sum = 0;
    for(long long i = 1; i <= n; i++) {
        sum += i*(i+1)/2;
    }
    cout << sum;
    return 0;
}
