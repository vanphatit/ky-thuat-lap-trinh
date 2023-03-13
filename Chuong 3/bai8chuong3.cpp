#include <bits/stdc++.h>

using namespace std;

int minN(float a){
	int i = 1;
	float rs = 1.0;
	do {
		i += 1;
		rs += (float)1/i;
	} while(rs <= a);
	return i;
}

int main(){
	float a;
	cin >> a;
	cout << minN(a);
	return 0;
}
