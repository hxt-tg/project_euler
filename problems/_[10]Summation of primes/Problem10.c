#include <stdio.h>
#include <stdlib.h>
#include <math.h>

bool IsPrime(int X);

int main(){
	int X;
	int counter = 0;
	unsigned long long int ans = 0;
	scanf("%d",&X);
	for (int i = 2;i < X + 1;i++){
		if (IsPrime(i)) {
			ans += i;
			printf("%d\n",i);
			counter++;
		}
	}
	printf("%d\n",counter);
	printf("%I64u\nPress Any Key to Exit ...",ans);
	system("pause > nul");
	return 0;
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

