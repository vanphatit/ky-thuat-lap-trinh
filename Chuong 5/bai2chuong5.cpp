#include<bits/stdc++.h>

using namespace std;

long long expo(long long n, int cnt){
	long long rs = 1;
	for(int i = 1; i <= cnt; i++){
		rs *= n;
	}
	return rs;
}

long long amstrong(long long num){
	long long n = num;
	long long sum = 0;
	int elt[10000];
	int count = 0;
	while(n > 0){
		elt[count] = n % 10;
		count += 1;
		n /= 10;
	}
	for(int i = 0; i < count; i++){
		sum += expo(elt[i], count);
		//cout << elt[i] << " " << expo(elt[i], count) << endl;
	}
	cout << sum << " " << num << endl;
	if(sum == num)
		return num;
	else
		return 0;
}

int main(){
	long long n;
	cin >> n;
	long long sum = 0;
	for(int i = 1; i <= n; i++){
		sum += amstrong(i);
	}
	cout << sum;
}
