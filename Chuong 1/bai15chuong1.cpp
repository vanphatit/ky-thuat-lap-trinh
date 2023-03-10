#include <bits/stdc++.h>

using namespace std;

struct COMPONENT {
    char name[30];
    char quycach[30];
    char cate[30]; //Loai A hoac Loai B
    long long unitP1;
    long long unitP2;
};

void input(COMPONENT &cpt);
void output(COMPONENT cpt);
bool cmp(COMPONENT a, COMPONENT b);
void sortComponent(COMPONENT cpt[], int n);

int main() {
    COMPONENT cpt[101];
    int n,count = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        input(cpt[i]);
        if(strcmp("A", cpt[i].cate) == 0)
        	count += 1;
    }
    sortComponent(cpt, n);
    for(int i = 0; i < n; i++){
        output(cpt[i]);
        cout << endl;
    }
    if(count >= 10) cout << 0;
    	else cout << -1;
}

bool cmp(COMPONENT a, COMPONENT b) {
    if (strcmp(a.cate, b.cate) == 0) {
        return strcmp(a.name, b.name) < 0;
    }
    return strcmp(a.cate, b.cate) < 0;
}

void sortComponent(COMPONENT cpt[], int n) {
    sort(cpt, cpt + n, cmp);
}


void input(COMPONENT &cpt) {
    cin.ignore(1);
    gets(cpt.name);
    gets(cpt.quycach);
    gets(cpt.cate);
    cin >> cpt.unitP1;
    cin >> cpt.unitP2;
}

void output(COMPONENT cpt) {
    cout << cpt.name << endl;
    cout << cpt.quycach << endl;
    cout << cpt.cate << endl;
    cout << cpt.unitP1 << endl;
    cout << cpt.unitP2;
}

