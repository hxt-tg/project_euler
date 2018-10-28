#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime[30] = {0};
int counter = 0;
void GeneratePrime(int X);
bool IsPrime(int X);
int AdjustAndCompute(int X);

int main(){
	int X;
	int ans = 0;
	scanf("%d",&X);
	GeneratePrime(X);
	ans = AdjustAndCompute(X);
	printf("%d\nPress Any Key to Exit ...",ans);
	system("pause > nul");
	return 0;
}

void GeneratePrime(int X){
	for (int i = 2;i < X + 1;i++){
		if (IsPrime(i)) {
			prime[counter++] = i;
		}
	}
}

bool IsPrime(int X){
	if (X > 9){
		for (int i = 2;i < sqrt(X) + 1;i++){
			if (X % i ==0 && X != i) return false;
		}
	}else{
		if (X == 4 ||X == 6 ||X == 8 ||X == 9) return false;
	}
	return true;
}

int AdjustAndCompute(int X){
	int m,temp_ans = 1;
	for (int i = 0;i < counter;i++) {
		m = 1;
		while (pow(prime[i] , m) < X) m++;
		prime[i] = pow(prime[i] , m-1);
		temp_ans *= prime[i];
	}
	return temp_ans;
}

