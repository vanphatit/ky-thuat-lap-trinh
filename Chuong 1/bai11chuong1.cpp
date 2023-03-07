#include <bits/stdc++.h>

using namespace std;

struct STUDENT {
	char mssv[9];
    char name[31];
    int year;
	float maths,physics,chemistry,avg;
};

void input(STUDENT &st);
void output(STUDENT st);
void incSort(int n, STUDENT st[]);
void decSort(int n, STUDENT st[]);
void stSwap(STUDENT &st1, STUDENT &st2);

int main(){
	STUDENT st[1000];
	int n;
	cin >> n;	
	float avg_max = 0;
	int avg_index;
	int year_max = 3000;
	int year_index, stFinded;
	for(int i = 0; i < n; i++){
		cin.ignore(1);
		input(st[i]);
		if(year_max > st[i].year){
			year_max = st[i].year;
			year_index = i;
		}
		if(avg_max < st[i].avg){
			avg_index = i;
			avg_max = st[i].avg;
		}
				
	}
	cin.ignore(1);
	input(st[n]);
	for(int i = 0; i < n; i++)
		if((st[i].mssv == st[n].mssv) && (st[i].name == st[n].name) && (st[i].year == st[n].year) && (st[i].maths == st[n].maths) && (st[i].physics == st[n].physics) && (st[i].chemistry == st[n].chemistry) && (st[i].avg == st[n].avg))
			stFinded = i;
	for(int i = 0; i < n; i++){
		output(st[i]);
		cout << endl;
	}
	output(st[avg_index]);
	incSort(n, st);
	for(int i = 0; i < n; i++){
		output(st[i]);
		cout << endl;
	}
	decSort(n,st);
	for(int i = 0; i < n; i++){
		output(st[i]);
		cout << endl;
	}
	for(int i = 0; i < n; i++){
		if((st[i].avg) > 5.0 && (st[i].maths >= 3.0) && (st[i].physics >= 3.0) && (st[i].chemistry >= 3.0)){
			output(st[i]);
			cout << endl;
		}
	}
	output(st[year_index]); cout << endl;
	output(st[n]);
}

void input(STUDENT &st){
	gets(st.mssv);
	gets(st.name);
	float d;
	cin >> st.year;
	cin >> d;
	st.maths = d;
	cin >> d;
	st.physics = d;
	cin >> d;
	st.chemistry = d;
	cin >> d;
	st.avg = d;
}

void output(STUDENT st){
	cout << st.mssv << endl;
	cout << st.name << endl;
	cout << st.year << endl;
	cout << st.maths << " " << st.physics << " " << st.chemistry << " " << st.avg;
}

void incSort(int n, STUDENT st[]){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n - i - 1; j++)
			if(st[j].avg > st[j+1].avg){
				stSwap(st[j],st[j+1]);
			}
}
void decSort(int n, STUDENT st[]){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n - i - 1; j++)
			if(st[j].maths < st[j+1].maths){
				stSwap(st[j],st[j+1]);
			}
}

void stSwap(STUDENT &st1, STUDENT &st2){
	STUDENT temp = st1;
	st1 = st2;
	st2 = temp;
}
