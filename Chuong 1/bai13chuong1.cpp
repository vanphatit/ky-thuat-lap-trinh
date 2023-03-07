#include <bits/stdc++.h>

using namespace std;

struct BOOK {
    char MaSSach[8];
    char TenSach[30];
    char TacGia[30];
    int SL;
};

void input(BOOK &bk);
void output(BOOK bk);

int main() {
    BOOK bk[101];
    int n, count = 0;
    cin >> n;
    cin.ignore(1);
    for(int i = 0; i < n; i++){
        input(bk[i]);
        count += 1;
    }
    char tenSach[30];
    cin.ignore(1);
    gets(tenSach);
    bool found = false;
    for(int i = 0; i < n; i++){
        if(strcmp(tenSach, bk[i].TenSach) == 0){
            output(bk[i]);
            cout << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Khong Tim Thay";
    }
    cout << endl << count;
}

void input(BOOK &bk) {
    cin.ignore(1);
    gets(bk.MaSSach);
    gets(bk.TenSach);
    gets(bk.TacGia);
    cin >> bk.SL;
}

void output(BOOK bk) {
    cout << bk.MaSSach << endl;
    cout << bk.TenSach << endl;
    cout << bk.TacGia << endl;
    cout << bk.SL;
}

