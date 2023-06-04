#include <iostream>
#define SIZE 100000

using namespace std;

int n, A[SIZE];
int B[SIZE];
int index = 0;
int max_sum = 0;

void sum_subarray(int start, int end) {
    int cur_sum = 0;
    for (int i = start; i <= end; i++) {
        B[index] = A[i];
        index += 1;
        cur_sum += A[i];
    }
    if (cur_sum > max_sum) {
        max_sum = cur_sum;
    }
    B[index] = -1; index += 1;
}

void find_increasing_subarrays(int min_length) {
    int start = 0;
    int end = 0;
    for(int i = 1; i <= n; i++){
        if(A[i] < A[i-1]){
            end = i - 1;
            if(end - start + 1 >= min_length)
                sum_subarray(start,end);
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
    int start = 0;
    int end = 0;
    for(int i = 0; i < index; i++){
        if(B[i] == -1){
            end = i - 1;
            int cur_sum = 0;
            for(int j = start; j <= end; j++){
                cur_sum += B[j];
            }
            if(cur_sum == max_sum){
                for(int j = start; j <= end; j++){
                    cout << B[j] << " ";
                }
                return 0;
            }
            start = i + 1;
        }
    }
}

