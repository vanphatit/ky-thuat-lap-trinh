#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream output("SOCHAN.DAT");
    int n = 100;
    int count = 0;
    for(int i = 0; i < n; i++){
		if(i % 2 == 0){
			output << i << " ";
			cout << i << " ";
			count += 1;
		}
		if((count+1)%30 == 0)
			cout << endl;
	}
    output.close();
    return 0;
}

