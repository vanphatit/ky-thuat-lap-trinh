#include <bits/stdc++.h>

using namespace std;
long long sMax = 0;
long long k;

void genCombination(long long arr[], long long data[], long long start, long long end, long long index, long long kCombin) {
    if (index == kCombin) {
    	long long sum = 0;
        for (long long i = 0; i < kCombin; i++) {
            sum += data[i];
        }
        if(sum > sMax && sum % k == 0)
        	sMax = sum;
        return;
    }
    for (long long i = start; i <= end && end - i + 1 >= kCombin - index; i++) {
        data[index] = arr[i];
        genCombination(arr, data, i+1, end, index+1, kCombin);
	}
}

int main(){
	long long n;
	cin >> n >> k;
	long long arr[26];
	for(long long i = 0; i < n; i++)
		cin >> arr[i];
	long long data[27];
	for(long long i = 1; i <= n; i++)
		genCombination(arr,data,0,n-1,0,i);
	cout << sMax;
	return 0;
}
