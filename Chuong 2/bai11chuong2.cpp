#include <bits/stdc++.h>

using namespace std;

string bigSum(string s1, string s2);
string bigSubtract(string s1, string s2);
void equalizeS(string &s1, string &s2);
bool isS1Bigger(string &s1, string &s2);
string normalizeS(string s);

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	s1 = normalizeS(s1);
	s2 = normalizeS(s2);
	cout << normalizeS(bigSum(s1,s2)) << endl;
	cout << normalizeS(bigSubtract(s1,s2));
	return -1;
}

string bigSum(string s1, string s2){
	string rs = "";
	int d = 0;
	int sum1c = 0;
	equalizeS(s1,s2);
	
	for(int i = s1.length()-1; i >= 0; i--){
		sum1c = (s1[i] - '0') + (s2[i] - '0');
		if(d == 1){
			sum1c += d;
			d = 0;
		}
		if(sum1c > 9){
			sum1c -= 10;
			d = 1;
		}
		rs += sum1c + '0';
		if(i == 0 && d != 0)
			rs += d + '0';
	}
	reverse(rs.begin(), rs.end());
	return rs;
}

string bigSubtract(string s1, string s2) {
    string rs = "";
    int sub1c;
    int borrow = 0;
    bool isS1Big = true;

    if (!isS1Bigger(s1, s2)) {
        isS1Big = false;
        string temp = s1;
        s1 = s2;
        s2 = temp;
    }

    for (int i = s1.length() - 1; i >= 0; i--) {
        sub1c = (s1[i] - '0') - (s2[i] - '0') - borrow;
        borrow = 0;
        if (sub1c < 0) {
            sub1c += 10;
            borrow = 1;
        }
        rs += sub1c + '0';
    }

    if (!isS1Big) {
        rs += "-";
    }

    reverse(rs.begin(), rs.end());

    if (rs[0] == '0') {
        rs.erase(0, 1);
    }

    if (borrow == 1) {
        rs.insert(0, 1, '-');
    }

    return rs;
}


string normalizeS(string s){
    int count = 0;
    int len = s.length();
    bool isNega = false;
    if (s[0] == '-') {
        isNega = true;
        s = s.substr(1);
        len--;
    }
    for(int i = 0; i < len; i++){
        if(s[i] != '0')
            break;
        count += 1;
    }
    s.erase(0, count); 
    if(s.empty()) 
        return "0";
    if(isNega) 
        s = "-" + s;
    return s;
}


bool isS1Bigger(string &s1, string &s2) //s1 co be hon s2 khong?
{
	int lens1 = s1.length();
	int lens2 = s2.length();
	if(lens1 == lens2){
		for(int i = 0; i < lens2; i++){
		if(s1[i] < s2[i])
			return false;
		}
	}
	else if(lens1 > lens2){
		equalizeS(s1,s2);
		return true;
	}
	else {
		equalizeS(s1,s2);
		return false;
	}
}

void equalizeS(string &s1, string &s2){
	int lens1 = s1.length();
	int lens2 = s2.length();
	int deltaLen = abs(lens1 - lens2);
	if(lens1 < lens2){
		for(int i = 0; i < deltaLen; i++)
			s1.insert(0, "0");
	}
	if(lens2 < lens1){
		for(int i = 0; i < deltaLen; i++)
			s2.insert(0, "0");
	}
}
