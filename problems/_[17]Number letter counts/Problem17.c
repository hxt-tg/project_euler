#include <stdio.h>
#include <stdlib.h>
#define MAX_LETTER 50

const char *elems[] = {"","one","two","three","four","five","six","seven","eight","nine",
					"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
					"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

void spell_num(int num,char *dest);
char* str_append(const char *src,char *dest);
void str_clear(char *src);
int count_words(const char *src);

int main(){
	char Y[MAX_LETTER];
	char readnum[MAX_LETTER] = "";
	int ans = 0;
/*	
	//single mode
	int X;
	scanf("%d",&X);
	spell_num(X,readnum);
	printf("%s\n",readnum);
	ans = count_words(readnum);
	printf("\nTotal letters:%d\nPress Any Key to Exit ...",ans);
*/	

	//loop part
	int letters = 0;
	for (int i = 1;i < 1001;i++){
		spell_num(i,readnum);
		ans = count_words(readnum);
		letters += ans;
		str_clear(readnum);
	}
	printf("\n\nTotal letters:%d\nPress Any Key to Exit ...",letters);
	
	
	system("pause > nul");
	return 0;
}

char* str_append(const char *src,char *dest){
	int i = 0,start = 0;
	while (*(dest + i++)){
		start++;
	}
	i = 0;
	while (*(src + i)){
		*(dest + start + i) = *(src + i++);
	}
	return dest;
}

void str_clear(char *src){
	int i = 0;
	while (*(src + i)){
		*(src + i++) = 0;
	}
}

int count_words(const char *src){
	int i = 0,ans = 0;
	while (*(src + i) != 0){
		if (*(src + i) != '-' && *(src + i) != ' '){
			ans++;
		}
		i++;
	}
	return ans;
}

void spell_num(int num,char *dest){
	char src[MAX_LETTER] = "",temp[20] = "";
	int hd = num / 100;	//reed hundred digit
	int od = num - hd * 100;	//read the last two digits
	int td = od / 10;	
	int dd = od - td * 10;

	//hundred part
	if (hd == 10){
		str_append("one thousand",temp);
	}else if (hd == 0){
		str_append("",temp);
	}else{
		str_append(elems[hd],temp);
		str_append(" hundred",temp);
		if (dd != 0 || td != 0){
			str_append(" and ",temp);
		}
	}
	str_append(temp,src);
	str_clear(temp);
	//other digits part
	if (td == 1){
		str_append(elems[od],temp);
	}else{
		if (td == 0){
			str_append("",temp);
		}else{
			str_append(elems[18 + td],temp);
			if (dd != 0){
				str_append("-",temp);
			}
		}
		str_append(elems[dd],temp);
	}
	str_append(temp,src);
	str_clear(temp);
	str_append(src,dest);
}

