#include <iostream>
#include <cstring>

using namespace std;

void cnt(char s[], int count[1000]){
	for(int i = 0; i < strlen(s); i++)
    {
        count[(int)s[i]]++;
    }
    for(int i = 0; i < 1000; i++)
    {
        if(count[i] != 0)
        {
            cout << (char)i << ": " << count[i] << endl;
        }
    }
}

int main()
{
    char s[1000];
    int count[1000] = {0};

    gets(s);

    cnt(s, count);

    return 0;
}

