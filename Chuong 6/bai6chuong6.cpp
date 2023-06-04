#include <iostream>
#define SIZE 100000

using namespace std;

int n, A[SIZE];

void output(int start, int end) {
    for (int i = start; i <= end; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void find_increasing_subarrays(int min_length) {
	int start = 0;
	int end = 0;
	for(int i = 1; i <= n; i++){
		if(A[i] < A[i-1]){
			end = i - 1;
			if(end - start + 1 >= min_length)
				output(start,end);
			start = i;
		}
	}
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    A[n] = -1;
    n+=1;
    find_increasing_subarrays(2);
    return 0;
}

