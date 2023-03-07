#include <bits/stdc++.h>

using namespace std;

struct VIDEO{
	char title[30];
	char cate[30];
	char director[30];
	char mMAc[30];
	char mFAc[30];
	int year;
	char firm[30];
};

void input(VIDEO &vd);
void output(VIDEO vd);
void find_with_cate(int n, char category[], VIDEO vd[]);
void find_with_mMAc(int n, char mMActor[], VIDEO vd[]);
void find_with_director(int n, char direc[], VIDEO vd[]);

int main(){
	VIDEO vd[1000];
	int n;
	cin >> n;
	cin.ignore(1);
	for(int i = 0; i < n; i++){
		input(vd[i]);
	}
	char category[30];
	gets(category);
	char mMActor[30];
	gets(mMActor);
	char direc[30];
	gets(direc);
	cout << endl;
	find_with_cate(n, category,vd);
	find_with_mMAc(n,mMActor,vd);
	find_with_director(n,direc,vd);
}

void find_with_cate(int n, char category[], VIDEO vd[]) {
    for(int i = 0; i < n; i++) {
        if(strcmp(category, vd[i].cate) == 0) {
            output(vd[i]);
            cout << endl;
        }
    }
}

void find_with_mMAc(int n, char mMActor[], VIDEO vd[]) {
    for(int i = 0; i < n; i++) {
        if(strcmp(mMActor, vd[i].mMAc) == 0) {
            output(vd[i]);
            cout << endl;
        }
    }
}

void find_with_director(int n, char direc[], VIDEO vd[]) {
    for(int i = 0; i < n; i++) {
        if(strcmp(direc, vd[i].director) == 0) {
            output(vd[i]);
            cout << endl;
        }
    }
}


void input(VIDEO &vd){
	gets(vd.title);
	gets(vd.cate);
	gets(vd.director);
	gets(vd.mMAc);
	gets(vd.mFAc);
	cin >> vd.year;
	cin.ignore(1);
	gets(vd.firm);
}

void output(VIDEO vd){
	cout << vd.title << endl;
	cout << vd.cate << endl;
	cout << vd.director << endl;
	cout << vd.mMAc << endl;
	cout << vd.mFAc << endl;
	cout << vd.year << endl;
	cout << vd.firm;
}
