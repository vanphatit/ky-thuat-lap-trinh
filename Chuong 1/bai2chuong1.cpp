#include <bits/stdc++.h>

using namespace std;

struct FRACTION{
	long long numer;
	long long denomi;
};

void input(FRACTION &fr);
void output(FRACTION fr);
FRACTION reduce(FRACTION fr);
FRACTION max(int n, FRACTION fr[]);
FRACTION sum(int n, FRACTION fr[]);
FRACTION multipication(int n, FRACTION fr[]);
void inverse(int n, FRACTION fr[]);
long long gcdFR(long long numer, long long denomi);

int main(){
	int n;
	cin >> n;
	FRACTION fr[100];
	for(int i = 0; i < n; i++)
		input(fr[i]);
	output(max(n,fr));
	cout << endl;
	output(sum(n,fr));
	cout << endl;
	output(multipication(n,fr));
	cout << endl;
	inverse(n, fr);
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
	}
		
	cout << fr.numer << " " << fr.denomi;
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

FRACTION max(int n, FRACTION fr[]){
    FRACTION max = fr[0];
    double max_value = (double)max.numer / max.denomi;
    for(int i = 1; i < n; i++){
        double value = (double)fr[i].numer / fr[i].denomi;
        if(value > max_value){
            max = fr[i];
            max_value = value;
        }
    }
    return max;
}

FRACTION sum(int n, FRACTION fr[]){
	FRACTION rs;
	rs.numer = 0;
	rs.denomi = 1;
	for(int i = 0; i < n; i++){
		rs.numer = rs.numer*fr[i].denomi + fr[i].numer*rs.denomi;
		rs.denomi *= fr[i].denomi;
		rs = reduce(rs);
	}
	return rs;
}

FRACTION multipication(int n, FRACTION fr[]){
	FRACTION rs;
	rs.numer = fr[0].numer;
	rs.denomi = fr[0].denomi;
	for(int i = 1; i < n; i++){
		rs.numer *= fr[i].numer;
		rs.denomi *= fr[i].denomi;
		rs = reduce(rs);
	}
	return rs;
}

void inverse(int n, FRACTION fr[]){
	for(int i = 0; i < n; i++){
		long temp = fr[i].numer;
		fr[i].numer = fr[i].denomi;
		fr[i].denomi = temp;
		output(fr[i]);
		cout << " ";
	}
}
