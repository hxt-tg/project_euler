#include <stdio.h>

void moveToEnd(int x);

int nums[] = {0,1,2,3,4,5,6,7,8,9};
int fac[] = {1,1,2,6,24,120,720,5040,40320,362880};

int main(){
	int num = 1000000;
	int temp = 0;
	int idx = 9;
	while(idx > 0){
		temp = num / fac[idx];
		num -= fac[idx]*temp;
		if (num == 0) {
			if (temp != 0) temp--;
			else temp++;
		}
		moveToEnd(temp);
		printf("%d",nums[9]);
		idx--;
	}
	printf("%d\n",nums[0]);
	return 0;
}

void moveToEnd(int x){
	int temp;
	while(x < 9){
		temp = nums[x];
		nums[x] = nums[x+1];
		nums[x+1] = temp;
		x++;
	}
}
