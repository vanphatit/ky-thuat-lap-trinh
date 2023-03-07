#include<bits/stdc++.h>

using namespace std;

struct MIXNUM{
    long long inter, numer, denomi;
};

struct FRACTION{
    long long numer;
    long long denomi;
};

FRACTION convertToFraction(MIXNUM mx);
MIXNUM convertToMixNum(FRACTION fr);
FRACTION add(FRACTION fr1, FRACTION fr2);
FRACTION subtract(FRACTION fr1, FRACTION fr2);

int main(){
    MIXNUM mx1, mx2;
    cin >> mx1.inter >> mx1.numer >> mx1.denomi;
    cin >> mx2.inter >> mx2.numer >> mx2.denomi;
    FRACTION fr1, fr2;
    fr1 = convertToFraction(mx1);
    fr2 = convertToFraction(mx2);
    cout << fr1.numer << " " << fr1.denomi << endl;
    cout << fr2.numer << " " << fr2.denomi << endl;
    
    FRACTION frSum = add(fr1,fr2);
    MIXNUM mxSum = convertToMixNum(frSum);
    cout << mxSum.inter << " " << mxSum.numer << " " << mxSum.denomi << " ";
    
    FRACTION frSubtract = subtract(fr1,fr2);
    MIXNUM mxSubtract = convertToMixNum(frSubtract);
    cout << mxSubtract.inter << " " << mxSubtract.numer << " " << mxSubtract.denomi;
}

FRACTION convertToFraction(MIXNUM mx){
    FRACTION rs;
    rs.numer = mx.inter * mx.denomi + mx.numer;
    rs.denomi = mx.denomi;
    return rs;
}

MIXNUM convertToMixNum(FRACTION fr) {
    MIXNUM result;
    result.inter = fr.numer / fr.denomi;
    result.numer = fr.numer % fr.denomi;
    result.denomi = fr.denomi;
    return result;
}

FRACTION add(FRACTION fr1, FRACTION fr2) {
    FRACTION result;
    result.numer = fr1.numer * fr2.denomi + fr2.numer * fr1.denomi;
    result.denomi = fr1.denomi * fr2.denomi;
    return result;
}

FRACTION subtract(FRACTION fr1, FRACTION fr2) {
    FRACTION result;
    result.numer = fr1.numer * fr2.denomi - fr2.numer * fr1.denomi;
    result.denomi = fr1.denomi * fr2.denomi;
    return result;
}

