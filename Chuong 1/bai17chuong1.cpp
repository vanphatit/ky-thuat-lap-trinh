#include <bits/stdc++.h>

using namespace std;

void makeBinaryF();
void readFile();

int main(){
	makeBinaryF();
	readFile();
}

void makeBinaryF(){
	fstream output;
	output.open("SONGUYEN.INP", ios::out|ios::binary);
	if(output){
		int A[10];
		int n = 1000;
		srand((unsigned)time(NULL));
		for(int i = 1; i <= n; i++){
			for(int j = 0; j < 10; j++){
				A[j] = rand()%10000;
			}
			output.write(reinterpret_cast<char *>(&A),sizeof(A));
			output.write("\n",1);
			
		}
		output.close();
	}
}

void readFile(){
	fstream input("SONGUYEN.INP", ios::in|ios::binary);
	if(!input){
		cout << "Khong mo duoc file!";
		exit(0);
	}
	int n=0;
	int A[10000];
	ofstream output("SONGUYEN.OUT");
	while(true){
		int B[10];
		input.read(reinterpret_cast<char *>(&B),sizeof(B));
		char c;
		input.read(reinterpret_cast<char *>(&c),sizeof(c));
		if(input.eof()){
			break;
		}
		for(int i = 0; i < 10; i++){
			A[n] = B[i];
			n++;
		}
	}
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n -i -1; j++)
			if(A[j] > A[j+1]){
				int temp = A[j];
				A[j] = A[j+1];
				A[j+1] = temp;
			}
	for(int i = 0; i < n; i++){
			output << A[i] << " ";
			if((i+1)%10 == 0)
				output << endl;
		}
	input.close();
    output.close();
}
