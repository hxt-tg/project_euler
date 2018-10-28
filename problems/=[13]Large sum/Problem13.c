#include <stdio.h>
#include <math.h>

typedef unsigned long long ull;

int NumOfDevisors(ull X);

int main(){
	int X,final_ans = 0;
	
	while (1){
		scanf("%d",&X);
		if (X < 1) break;
		final_ans = NumOfDevisors(X);
		printf("%d\n\n",final_ans);
	}

	return 0;
}

int NumOfDevisors(ull X){
	ull dev[4000]={0};
	int dev_mi[4000]={0};
	ull i = 2;
	int posi = 0;
	ull now_dev = 0;
	int ans = 1;
	while (X > 1){
		if (X % i == 0) {
			if (i > now_dev){
				posi++;
				now_dev = i;
				dev[posi] = i;
				dev_mi[posi] = 1;
			} else {
				dev_mi[posi]++;
			}
			X /= i;
		} else i++;
	}
	for (int j = 1;j < posi + 1;j++){
		printf("%I64u\t\t%d\n",dev[j],dev_mi[j]);
		ans *= dev_mi[j]+1;
	}
	return ans;
}


