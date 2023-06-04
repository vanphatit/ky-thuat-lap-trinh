#include<bits/stdc++.h>

using namespace std;

int n[10000];

int F(int m){
	n[0] = 2;
	n[1] = 4;
	n[2] = 6;
	int i = -1;
	while(n[i] <= m){
		i += 1;
		if(i > 2)
			n[i] = 2 * n[i-3] + 4 * n[i-2] + 6 * n[i-1];
	}
	return --i;	
}

int main(){
	int m;
	cin >> m;
	
	cout << F(m);
}
