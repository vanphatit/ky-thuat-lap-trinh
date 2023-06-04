#include <iostream>
#include <cstring>

using namespace std;

void sw(char s[], int start, int end){
	for(int i = end; i >= start; i--)
		cout << s[i];
	cout << " ";
}

int main()
{
    char s[100000];

    gets(s);
    s[strlen(s)] = ' ';
    int start = 0;
    int end = 0;
	for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == ' '){
        	end = i - 1;
        	sw(s,start,end);
        	start = i + 1;
		}
    }
    return 0;
}

