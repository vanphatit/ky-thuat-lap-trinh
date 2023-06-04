#include <bits/stdc++.h>

using namespace std;

char s[1000],t[1000];
int B[1000][1000];

int main(){
	gets(s);
	gets(t);
	int lens = strlen(s);
	int lent = strlen(t);
	for(int i = 1; i <= lens; i++)
		for(int j = 1; j <= lent; j++)
			if(s[i-1] == t[j-1])
				B[i][j] = B[i-1][j-1] + 1;
			else
				B[i][j] = max(B[i-1][j], B[i][j-1]);
	cout << B[lens][lent];
}
