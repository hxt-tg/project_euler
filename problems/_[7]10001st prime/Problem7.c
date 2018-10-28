#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int prime[9999999] = {0};
int counter = 0;

void GeneratePrime(int X);

bool IsPrime(unsigned long long int X);

int main(){
	int X;
	int ans = 0;
	scanf("%d",&X);
	GeneratePrime(X);
	for (int i = 0;i < counter;i++){
		printf("\rprime[%d] = %I64u",i + 1,prime[i]);
	}
	printf("%d\nPress Any Key to Exit ...",ans);
	system("pause > nul");
	return 0;
}

void GeneratePrime(int X){
	unsigned long long int i = 2;
	while (counter < X){
		if (IsPrime(i)) {
			prime[counter++] = i;
		}
		i++;
	}
}

bool IsPrime(unsigned long long int X){
	if (X > 9){
		for (unsigned long long int i = 2;i < sqrt(X) + 1;i++){
			if (X % i ==0 && X != i) return false;
		}
	}else{
		if (X == 4 ||X == 6 ||X == 8 ||X == 9) return false;
	}
	return true;
}
