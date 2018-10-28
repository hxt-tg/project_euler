#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int n){
	if (n == 0 || n == 1) 
	return 1;
	else
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(){
	int X;
	int ans = 0;
	scanf("%d",&X);
	int n = 0;
	int F = 1;
	while (F < X){
		F = Fibonacci(n++);
		if (F % 2==0) ans += F;
	}
	printf("%d\nPress Any Key to Exit ...",ans);
	system("pause > nul");
	return 0;
}

