#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool IsPalindromeNumber(int X){
	int len;
	char temp[20];
	itoa(X,temp,10);
	len = strlen(temp);
	
	for(int i = 0;i < 3;i++){
		if (temp[i]!=temp[len - 1 - i]) {
			return false;
			
		}
	}
	return true;
}

int main(){
	int X_min,X_max;
	int ans = 0,ans_i,ans_j;
	scanf("%d %d",&X_min ,&X_max);
	for (int i = X_max ;i > X_min;i--){
		for (int j = X_max ;j > X_min;j--){
			
			if (IsPalindromeNumber(i * j)){
				if (i * j > ans) {
					ans = i * j;
					ans_i = i;
					ans_j = j;
				}
			}
			
		}
	}
	printf("%d\n= %d x %d\nPress Any Key to Exit ...",ans,ans_i,ans_j);
	system("pause > nul");
	return 0;
}
