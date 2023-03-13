#include<bits/stdc++.h>

using namespace std;

int main(){
	char s[1000];
	gets(s);
	int t = 0;
	int h = 0;
	int c = 0;
	int o = 0;
	for(int i = 0; i < strlen(s); i++){
		if(s[i] >= 'a' && s[i] <= 'z')
			t += 1;
		else if(s[i] >= 'A' && s[i] <= 'Z'){
			h += 1;
		}
		else if(s[i] >= '0' && s[i] <= '9')
			c += 1;
		else 
			o += 1;
	}
	cout << t << " " << h << " " << c << " " << o;
	return 0;
}
