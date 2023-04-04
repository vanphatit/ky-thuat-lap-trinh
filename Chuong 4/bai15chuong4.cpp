#include<bits/stdc++.h>

using namespace std;

int n;

void move(int n, int x, int y){
	if(n == 1)
		cout << "Chuyen 1 dia tu " << x << " sang " << y << endl;
	else{
		move(n-1,x,6-x-y);
		move(1,x,y);
		move(n-1,6-x-y,y);
	}
}

int main(){
	cin >> n;
	move(n,1,3);
}
