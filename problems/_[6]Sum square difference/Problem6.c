#include <stdio.h>
#include <stdlib.h>

int SquareSum(int X);

long int SumSquare(int X);

int main(){
	int X;
	long int ans = 0;
	scanf("%d",&X);
	ans = SumSquare(X) - SquareSum(X);
	printf("%ld\nPress Any Key to Exit ...",ans);
	system("pause > nul");
	return 0;
}

int SquareSum(int X){
	int sum = 0;
	for (int i = 1;i < X + 1;i++){
		sum += i * i;
	}
	return sum;
}

long int SumSquare(int X){
	long int sum = 0;
		for (int i = 1;i < X + 1;i++){
		sum += i;
	}
	return sum * sum;
}
