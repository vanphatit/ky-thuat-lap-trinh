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
FRACTION min(int n, FRACTION fr[]);
FRACTION sum(int n, FRACTION fr[]);
void bubbleSort(int n, FRACTION fr[]);
long long gcdFR(long long numer, long long denomi);

int main(){
	int n;
	cin >> n;
	FRACTION fr[100];
	for(int i = 0; i < n; i++)
		input(fr[i]);
	output(sum(n,fr));
	cout << endl;
	output(max(n,fr)); cout << " "; output(min(n,fr));
	cout << endl;
	bubbleSort(n, fr);
	for(int i = 0; i < n; i++){
		output(fr[i]);
		cout << " ";
	}
		
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

FRACTION min(int n, FRACTION fr[]){
    FRACTION min = fr[0];
    double min_value = (double)min.numer / min.denomi;
    for(int i = 1; i < n; i++){
        double value = (double)fr[i].numer / fr[i].denomi;
        if(value < min_value){
            min = fr[i];
            min_value = value;
        }
    }
    return min;
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

void bubbleSort(int n, FRACTION fr[]){
    for(int i = 0; i < n-1; i++){
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++){
            double value1 = (double)fr[j].numer / fr[j].denomi;
            double value2 = (double)fr[j+1].numer / fr[j+1].denomi;
            if(value1 > value2){
                swap(fr[j], fr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }
}
