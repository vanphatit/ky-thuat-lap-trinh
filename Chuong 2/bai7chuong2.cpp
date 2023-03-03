#include <bits/stdc++.h>

using namespace std;

string editStr(string s);
void del(string &s, int index);

int main(){
	int n;
	string s;
	getline(cin, s);
	cout << editStr(s);
}

string editStr(string s){
	if(s[0] != ' ')
		s[0] = toupper(s[0]);
	for(int i = 0; i < s.length(); i++){
		if(s[i] == ' ' && s[i+1] == ' '){
			s.erase(s.begin() + i);
			i--;
		}
	}
	if(s[0] == ' ')
		s.erase(s.begin());
	if(s[s.length() - 1] == ' ')
		s.erase(s.end() - 1);
	s[0] = toupper(s[0]);
	return s;
}

void del(string &s, int index){
	int n = s.length();
	for(int i = index; i<n; i++)
		s[i] = s[i+1];
	s[n-1] = '\0'; // ket thuc chuoi
}
