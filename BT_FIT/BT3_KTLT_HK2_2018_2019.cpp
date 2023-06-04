#include <bits/stdc++.h>

using namespace std;

int main(){
	int x1,y1,x2,y2;
	
	cin >> x1 >> y1 >> x2 >> y2;
	
	if(x1 >= 0 || y1 >= 0 || x2 >= 0 || y2 >= 0 || x1 < 8 || y1 < 8 || x2 < 8 || y2 < 8)
	{
		int Y[9] = {0, 1,-1,-2,-2,-1,1,2, 2};
		int X[9] = {0,-2,-2,-1, 1, 2,2,1,-1};
		
		int isExist = 0;
		for(int i = 1; i <= 8; i++){
			if(x2 == (x1 + X[i]) && y2 == (y1 + Y[i])){
				cout << i;
				isExist = 1;
			}
		}
		if(isExist == 0)
			cout << 0;
	}
	else 
		cout << 0;
}
