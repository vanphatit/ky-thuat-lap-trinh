#include <bits/stdc++.h>

using namespace std;

struct COMPLEX{
    int re, im;
};

COMPLEX sum(COMPLEX cx1, COMPLEX cx2);
COMPLEX multiply(COMPLEX cx1, COMPLEX cx2);
void output(COMPLEX cx);

int main(){
    int n;
    cin >> n;

    COMPLEX a[100];
    for(int i = 0; i < n; i++){
        cin >> a[i].re >> a[i].im;
    }

    COMPLEX total_sum = {0, 0};
    COMPLEX product = {1, 0};

    for(int i = 0; i < n; i++){
        total_sum = sum(total_sum, a[i]);
        product = multiply(product, a[i]);
    }

    output(total_sum);
    cout << endl;
    output(product);
}

COMPLEX sum(COMPLEX cx1, COMPLEX cx2){
    COMPLEX rs;
    rs.re = cx1.re + cx2.re;
    rs.im = cx1.im + cx2.im;
    return rs;
}

COMPLEX multiply(COMPLEX cx1, COMPLEX cx2){
    COMPLEX rs;
    rs.re = cx1.re * cx2.re - cx1.im * cx2.im;
    rs.im = cx1.re * cx2.im + cx1.im * cx2.re;
    return rs; 
}

void output(COMPLEX cx){
    cout << cx.re << " " << cx.im;
}

