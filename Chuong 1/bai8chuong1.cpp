#include <bits/stdc++.h>

using namespace std;

struct OXY{
	int x,y;
};

int main(){
	OXY M, N;
	cin >> M.x >> M.y;
	cin >> N.x >> N.y;
	cout << M.x << " " << (-M.y) << " ";
	cout << (-M.x) << " " << (M.y) << " ";
	cout << (-M.x) << " " << (-M.y) << endl;
	
	float distance = (N.x - M.x)*(N.x - M.x) + (N.y - M.y)*(N.y - M.y);
	cout << sqrt(distance);
}
