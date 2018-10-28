#include <iostream>
#include <stdlib.h>
#define MAX_LENGTH 26
using namespace std;
typedef unsigned long long ull;


ull compute_lattice(int x,int y){
	//initialize lattice paths
	ull amount[MAX_LENGTH][MAX_LENGTH] = {0};
	for (int i = 1;i <= x;i++){
		amount[0][i] = 1;
	}
	for (int i = 1;i <= y;i++){
		amount[i][0] = 1;
	}
	for (int i = 1;i <= y;i++){
		for (int j = 1;j <= x;j++){
			amount[i][j] = amount[i - 1][j] + amount[i][j - 1];
		}
	}
	//printall
	for (int i = 0;i <= y;i++){
		for(int j = 0;j <= x;j++){
			printf(" %I64d",amount[i][j]);
		}
		printf("\n");
	}
	return amount[y][x];
}

int main(){
	int cols,lines;
	ull ans = 0;
	cin >> cols;
	cin >> lines;
	ans = compute_lattice(cols,lines);
	cout << ans << endl;
	system("pause > nul");
	return 0;
	
}
