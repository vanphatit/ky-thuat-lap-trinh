#include<bits/stdc++.h>

using namespace std;

struct DATE{
	int day, month, year;
};

bool isValid(DATE date);
bool isLeapYear(int y);
int daysBetween(DATE date1, DATE date2);
int daysInMonth(int month, int year);

int main(){
	DATE date1, date2;
	
	cin >> date1.day >> date1.month >> date1.year;
	cin >> date2.day >> date2.month >> date2.year;
	
	if(isValid(date1) && isValid(date2)){
		cout << daysBetween(date1, date2);
	} else cout << -1;
}

bool isValid(DATE date){
	int A[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(isLeapYear(date.year))
		A[2] = 29;
	if(date.year <= 0 || (date.month < 1 && date.month > 12) || (date.day < 0 && date.day > 31))
		return false;
	else if(date.day > A[date.month])
			return false;
	return true;
}

bool isLeapYear(int y){
	if((y % 4 == 0 && y % 100 != 0) || (y % 100 == 0 && y % 400 == 0))
		return true;
	return false;
}

int daysInMonth(int month, int year) {
    static const int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (month != 2) {
        return daysInMonth[month - 1];
    } else if (isLeapYear(year)) {
        return 29;
    } else {
        return 28;
    }
}

int daysBetween(DATE date1, DATE date2) {
    if (date1.year > date2.year || 
        (date1.year == date2.year && date1.month > date2.month) ||
        (date1.year == date2.year && date1.month == date2.month && date1.day > date2.day)) {
        swap(date1, date2);
    }

    int days = 0;
    
    for(int i = date1.year; i < date2.year; i++)
    {
    	if(isLeapYear(i))
    		days += 1;
    	days += 365;
    }
    for(int i = date1.month; i < date2.month; i++){
    	days += daysInMonth(i, date2.year);
	}
	
	days += date2.day - date1.day;
    return days;
}
