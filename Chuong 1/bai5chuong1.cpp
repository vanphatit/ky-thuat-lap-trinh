#include <bits/stdc++.h>

using namespace std;

struct COMPLEX{
	int re, im;
};

COMPLEX sum(COMPLEX cx1, COMPLEX cx2);
COMPLEX subtract(COMPLEX cx1, COMPLEX cx2);
COMPLEX multiplication(COMPLEX cx1, COMPLEX cx2);
void output(COMPLEX cx);

int main(){
	COMPLEX cx1, cx2;
	cin >> cx1.re >> cx1.im >> cx2.re >> cx2.im;
	output(sum(cx1, cx2));
	cout << endl;
	output(subtract(cx1,cx2));
	cout << endl;
	output(multiplication(cx1,cx2));
}

COMPLEX sum(COMPLEX cx1, COMPLEX cx2){
	COMPLEX rs = cx1;
	rs.re += cx2.re;
	rs.im += cx2.im;
	return rs;
}

COMPLEX subtract(COMPLEX cx1, COMPLEX cx2){
	COMPLEX rs = cx1;
	rs.re -= cx2.re;
	rs.im -= cx2.im;
	return rs;
}

COMPLEX multiplication(COMPLEX cx1, COMPLEX cx2){
	COMPLEX rs;
	rs.re = cx1.re * cx2.re - cx1.im * cx2.im;
	rs.im = cx1.re * cx2.im + cx1.im * cx2.re;
	return rs; 
}

void output(COMPLEX cx){
	cout << cx.re << " "<< cx.im;
}
