#include <bits/stdc++.h>
#include <string>

using namespace std;

long long toInt(char s[]);

int main(){
	char s[100000];
	gets(s);
	char num[100000];
	long long sum = 0;
	for(long long i = 0; i < strlen(s); i++){
    	if(s[i] >= '0' && s[i] <= '9'){
        	strncat(num, &s[i], 1);
    	}
    	else if(strlen(num) > 0 ){
        	sum += toInt(num);
        	num[0] = '\0';
    	}
	}
	if(strlen(num) > 0){
		sum += toInt(num);
        num[0] = '\0';
	}
	cout << sum;
}

long long toInt(char s[]){
    long long num = 0;
    for(long long i = 0; i < strlen(s); i++){
        num = num * 10 + (s[i] - '0');
    }
    return num;
}
