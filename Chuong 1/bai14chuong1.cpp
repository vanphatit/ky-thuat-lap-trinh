#include <bits/stdc++.h>

using namespace std;

struct COMPUTER {
    char cate[8];
    char factory[30];
    int warranty;
};

void input(COMPUTER &cp);
void output(COMPUTER cp);

int main() {
    COMPUTER cp[101];
    int n, count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        input(cp[i]);
        if(cp[i].warranty == 1)
        	count += 1;
    }
    cout << endl << count << endl;
    for(int i = 0; i < n; i++){
        if(strcmp("My", cp[i].factory) == 0){
            output(cp[i]);
            cout << endl;
        }
    }
}

void input(COMPUTER &cp) {
    cin.ignore(1);
    gets(cp.cate);
    gets(cp.factory);
    cin >> cp.warranty;
}

void output(COMPUTER cp) {
    cout << cp.cate << endl;
    cout << cp.factory << endl;
    cout << cp.warranty;
}

