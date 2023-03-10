#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream output("SONGUYEN.INP");
    int A[32768] = {0};
    int n = 10000;
    srand((unsigned)time(NULL));
    for(int i = 0; i < n; i++){
    	int a = rand()%32768;
    	if(A[a] == 0){
    		A[a] = 1;
    		output << a << " ";
		}
    		
	}
    output.close();
    return 0;
}

