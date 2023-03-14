#include <bits/stdc++.h>

using namespace std;

string bigSum(string s1, string s2);
string bigMulti(string s1, string s2);
void equalizeS(string &s1, string &s2);
string normalizeS(string s);

int main(){
	string s1, s2;
	cin >> s1 >> s2;
	s1 = normalizeS(s1);
	s2 = normalizeS(s2);
	string rs = normalizeS(bigMulti(s1,s2));
	cout << rs;
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

string bigMulti(string s1, string s2)
{
	string rs = "";
	string ts[100];
	equalizeS(s1,s2);
	int rest = 0;
	int mul1c = 0;
	int d = 0;
	for(int i = s2.length() - 1; i >= 0; i--)
	{
		for(int j = s2.length() - 1; j >= 0; j--)
		{
			mul1c = (s1[j] - '0') * (s2[i] - '0');
			if(rest > 0){
				mul1c += rest;
				rest = 0;
			}
			if(mul1c > 9){
				rest = mul1c / 10;
				mul1c -= rest*10;
				//cout << rest << " - ";
			}
			ts[d] += mul1c + '0';
			if(j == 0 && rest != 0){
				ts[d] += rest + '0';
				rest = 0;
			}
			//cout << mul1c << " ";
		}
		reverse(ts[d].begin(), ts[d].end());
		if(d > 0)
			for(int k = 0; k < d; k++)
				ts[d].insert(ts[d].length(),"0");
		//cout << ts[d] << " - ";
		d += 1;			
	}
	rs = ts[0];
	for(int i = 1; i < d; i++)
	{
		rs = bigSum(rs,ts[i]);
		//cout << rs << " - ";
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
