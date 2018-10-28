#include <stdio.h>
#define MAX_L 4

int fac(int x);
int facsum(const int src);

int list[] = {1,1,2,6,24,120,720,5040,40320,362880};

int main(void)
{
	int sum = 0;
	int cnt = 0;	// counter
	int tp = 0;		// temp
	while (cnt < MAX_L)
	{
		tp++;
		if (facsum(tp))
		{
			printf("\r%d\n",tp);
			cnt++;
			sum += tp;
		}
		else
		{
			printf("\r%d",tp);
		}
	}
	printf("sum without 1! and 2! is %d.\n",sum - 3);
	return 0;
}

int fac(int x)
{
	int ans = 1;
	int i;
	for (i = 2; i <= x; i++)
	{
		ans *= i;
	}
	return ans;
}

int facsum(const int src)
{
	int flag = 0;
	int x = src;
	int tp;
	int sum = 0;
	while(x > 0)
	{
		tp = x % 10;
		sum += fac(tp);
		//sum += list[tp];
		x /= 10;
	}
	if (sum == src) 
		flag = 1;
	return flag;
}

