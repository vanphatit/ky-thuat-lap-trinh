#include <bits/stdc++.h>
using namespace std;

struct GOODS {
    string maHang;
    string name;
    int SL;
    long long unitP;
    int SLTon;
    int warranty;
};

void input(GOODS &gd);
void output(GOODS gd);
void sortSLT(int n, GOODS gd[]);

int main() {
    int n, max_SLTon, max_Price = 0;
    int min_SLTon = 99999;
    cin >> n;

    GOODS gd[100];

    for (int i = 0; i < n; i++) {
        input(gd[i]);
        if(max_SLTon < gd[i].SLTon)
        	max_SLTon = gd[i].SLTon;
        if(min_SLTon > gd[i].SLTon)
        	min_SLTon = gd[i].SLTon;
        if(max_Price < gd[i].unitP)
        	max_Price = gd[i].unitP;
    }
    cout << endl;
    
    for(int i = 0; i < n; i++)
    	if(max_SLTon == gd[i].SLTon){
    		output(gd[i]); cout << endl;
    	}
    for(int i = 0; i < n; i++)
    	if(min_SLTon == gd[i].SLTon){
    		output(gd[i]); cout << endl;
    	}
    for(int i = 0; i < n; i++)
    	if(max_Price == gd[i].unitP){
    		output(gd[i]); cout << endl;
    	}
    for(int i = 0; i < n; i++)
    	if(gd[i].warranty > 12){
    		output(gd[i]); cout << endl;
		}
	sortSLT(n,gd);
	for(int i = 0; i < n; i++){
		output(gd[i]);
		if(i < n - 1)
			cout << endl;
	}
    return 0;
}

void sortSLT(int n, GOODS gd[]){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n - 1; j++)
			if(gd[j].SLTon > gd[j+1].SLTon){
				GOODS temp = gd[j];
				gd[j] = gd[j+1];
				gd[j+1] = temp;
			}
}

void input(GOODS &gd) {
    cin >> gd.maHang;
    cin.ignore();
    getline(cin, gd.name);
    cin >> gd.SL;
    cin >> gd.unitP;
    cin >> gd.SLTon;
	cin >> gd.warranty;
}

void output(GOODS gd) {
    cout << gd.maHang << endl;
    cout << gd.name << endl;
    cout << gd.SL << endl;
    cout << gd.unitP << endl;
    cout << gd.SLTon << endl;
    cout << gd.warranty;
}

