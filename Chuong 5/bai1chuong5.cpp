#include<bits/stdc++.h>

using namespace std;

long long n;

void changeBinary(long long i){
	int rs[100000];
	int count = 0;
	while(i > 0){
		rs[count] = i % 2;
		count += 1;
		i /= 2;
	}
	for(int i = count-1; i >= 0; i--){
		cout << rs[i];
	}
	cout << endl;
}

int main(){
	cin >> n;
	for(long long i = 1; i <= n; i++)
		changeBinary(i);
}
