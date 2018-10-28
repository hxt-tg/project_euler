#include <stdio.h>
#include <stdlib.h>
#include "math.h"


long int FindMaxFactor(unsigned long long int X){
	long int i = 2;
	long int max_factor = 1;
	while (X > 1) {
		if (X % i == 0) {
			if (i > max_factor) max_factor = i;
			X = X / i;
		}else i++;
	}
	return max_factor;
}

int main(){
	unsigned long long int X;
	long int ans = 0;
	scanf("%lld",&X);
	ans = FindMaxFactor(X);
	printf("%d\nPress Any Key to Exit ...",ans);
	system("pause > nul");
	return 0;
}


