#include <bits/stdc++.h>

using namespace std;

struct FRACTION{
	long long numer;
	long long denomi;
};

void input(FRACTION &fr);
void output(FRACTION fr);
FRACTION reduce(FRACTION fr);
FRACTION sum(FRACTION fr[]);
FRACTION subtract(FRACTION fr[]);
FRACTION multipication(FRACTION fr[]);
FRACTION division(FRACTION fr[]);
void commonDenomi(FRACTION fr[]);
void compare(FRACTION fr[]);
long long gcdFR(long long long2umer, long long denomi);

int main(){
	FRACTION fr[2];
	for(int i = 0; i < 2; i++)
		input(fr[i]);
	output(sum(fr));
	cout << endl;
	output(subtract(fr));
	cout << endl;
	output(multipication(fr));
	cout << endl;
	output(division(fr));
	cout << endl;
	output(fr[0]); cout << " "; output(fr[1]); cout << endl;
	commonDenomi(fr); cout << endl;
	compare(fr);
}

void input(FRACTION &fr){
	cin >> fr.numer;
	cin >> fr.denomi;
	if(fr.numer < 0 && fr.denomi < 0){
		fr.numer = abs(fr.numer);
		fr.denomi = abs(fr.denomi);
	}
	fr = reduce(fr);
}

void output(FRACTION fr){
	if(fr.numer < 0 && fr.denomi < 0){
		fr.numer = abs(fr.numer);
		fr.denomi = abs(fr.denomi);
	} else if(fr.denomi < 0){
		fr.numer *= -1;
		fr.denomi *= -1;
	}
		
	cout << fr.numer << " " << fr.denomi;
}

void commonDenomi(FRACTION fr[]){
	long long d = (fr[0].denomi * fr[1].denomi) / gcdFR(fr[0].denomi, fr[1].denomi);
	fr[0].numer *= d / fr[0].denomi;
	fr[1].numer *= d / fr[1].denomi;
	fr[0].denomi *= d/ fr[0].denomi;
	fr[1].denomi *= d/ fr[1].denomi;
	output(fr[0]); cout << " "; output(fr[1]);
}

void compare(FRACTION fr[]){
	if(fr[0].numer > fr[1].numer)
		output(fr[0]);
	else if(fr[0].numer < fr[1].numer)
		output(fr[1]);
	else cout << 0;
}

FRACTION reduce(FRACTION fr){
	long long gcdfr = gcdFR(fr.numer, fr.denomi);
	fr.numer /= gcdfr;
	fr.denomi /= gcdfr;
	if (fr.denomi < 0) {
        fr.numer *= -1;
        fr.denomi *= -1;
    }
	return fr;
}

long long gcdFR(long long numer, long long denomi){
	long long n;
	numer = abs(numer);
	denomi = abs(denomi);
	if(numer < denomi)
		n = numer;
	else n = denomi;
	for(long long i = n; i > 0; i--)
		if(denomi % i == 0 && numer % i == 0)
			return i;
}	

FRACTION sum(FRACTION fr[]){
	FRACTION rs;
	rs.numer = 0;
	rs.denomi = 1;
	for(int i = 0; i < 2; i++){
		rs.numer = rs.numer*fr[i].denomi + fr[i].numer*rs.denomi;
		rs.denomi *= fr[i].denomi;
		rs = reduce(rs);
	}
	return rs;
}

FRACTION subtract(FRACTION fr[]){
	FRACTION rs = fr[0];
	for(int i = 1; i < 2; i++){
		rs.numer = rs.numer*fr[i].denomi - fr[i].numer*rs.denomi;
		rs.denomi *= fr[i].denomi;
		rs = reduce(rs);
	}
	return rs;
}

FRACTION multipication(FRACTION fr[]){
	FRACTION rs;
	rs.numer = fr[0].numer;
	rs.denomi = fr[0].denomi;
	for(int i = 1; i < 2; i++){
		rs.numer *= fr[i].numer;
		rs.denomi *= fr[i].denomi;
		rs = reduce(rs);
	}
	return rs;
}

FRACTION division(FRACTION fr[]){
    FRACTION rs;
    if (fr[2].numer == 0){
        cout << "Error: Division by zero" << endl;
        rs.numer = 0;
        rs.denomi = 1;
        return rs;
    }
    rs.numer = fr[0].numer * fr[1].denomi;
    rs.denomi = fr[0].denomi * fr[1].numer;
    rs = reduce(rs);
    return rs;
}

