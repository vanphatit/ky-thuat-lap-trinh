#include <bits/stdc++.h>

using namespace std;

bool isValidDate(int d, int m, int y, int A[]);
bool isLeapYear(int y);

int main(){
	int A[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int d,m,y;
	cin >> d >> m >> y;
	if(isValidDate(d,m,y,A)){
		if(d == A[m])
			if(m == 12){
				d = 1;
				m = 1;
				y += 1;
			} else {
				d = 1;
				m += 1;
			}
		else {
			d += 1;
		}
		cout << d << " " << m << " " << y;
	} else
		cout << -1;
}

bool isValidDate(int d, int m, int y, int A[]){
	if(isLeapYear(y))
		A[2] = 29;
	if(y <= 0 || (m < 1 && m > 12) || (d < 0 && d > 31))
		return false;
	else if(d > A[m])
			return false;
	return true;	
}

bool isLeapYear(int y){
	if((y % 4 == 0 && y % 100 != 0) || (y % 100 == 0))
		return true;
	return false;
}
