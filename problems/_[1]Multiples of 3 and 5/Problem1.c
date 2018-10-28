#include <stdio.h>
#include <stdlib.h>

int main(){
	int X;
	int ans = 0;
	scanf("%d",&X);
	for (int i=1;i<X;i++){
		if (i%3==0||i%5==0) {
			ans += i;
		}
	}
	printf("%d\nPress Any Key to Exit ...",ans);
	system("pause > nul");
	return 0;
}

