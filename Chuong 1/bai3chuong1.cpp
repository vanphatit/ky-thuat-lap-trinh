#include <bits/stdc++.h>

using namespace std;

struct THOIGIAN{
    int gio, phut, giay;
};

bool isValid(THOIGIAN time);

int main(){
    THOIGIAN time1, time2;
    cin >> time1.gio >> time1.phut >> time1.giay;
    cin >> time2.gio >> time2.phut >> time2.giay;
    
    if(isValid(time1) && isValid(time2)){
        int distance = abs(time2.gio - time1.gio)*3600 + abs(time2.phut - time1.phut) * 60 + abs(time2.giay - time1.giay);
        cout << distance;
    } else {
        cout << -1;
    }
}

bool isValid(THOIGIAN time){
    if (time.gio >= 0 && time.gio < 24 && time.phut >= 0 && time.phut < 60 && time.giay >= 0 && time.giay < 60) {
        return true;
    } else {
        return false;
    }
}

