#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream integer("SONGUYEN.INP");
    ofstream odd("SOLE.OUT");
    ofstream even("SOCHAN.OUT");
    int n = 10000;
    srand((unsigned)time(NULL));
    for(int i = 0; i < n; i++){
    	int a = rand()%32768;
    	integer << a << " ";
		if(a % 2 == 0)
			even << a << " ";
		if(a % 2 != 0)
			odd << a << " ";    		
	}
    integer.close();
    odd.close();
    even.close();
    return 0;
}

