#include <stdio.h>
#include <stdlib.h>

bool IsPythagoreanTriplet(int num_1,int num_2,int num_3);

int main(){
	int X , k = 0;
	int ans = 0;
	scanf("%d",&X);
	for (int i = 1;i < X;i++){
		for (int j = 1;j < X;j++) {
			k = X - i - j;
			if (i > k || j > k) break;
			if (IsPythagoreanTriplet(i , j , k)) {
				printf("%d ^ 2 + %d ^ 2 = %d ^ 2\n", i , j , k);
				ans = i * j * k;
			}
		}
	}
	printf("%d\nPress Any Key to Exit ...",ans);
	system("pause > nul");
	return 0;
}

bool IsPythagoreanTriplet(int num_1,int num_2,int num_3){
	if (num_1 * num_1 + num_2 * num_2 == num_3 * num_3) return true;
	return false;
}
