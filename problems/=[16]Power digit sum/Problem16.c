#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_LENGTH 10000
#define DIGIT_UNIT 4
#define MAX_DIGIT MAX_LENGTH/DIGIT_UNIT

void huge_sum(char *a,char *b,char *ans);
void str_to_arr(char *str,int *arr);
int get_length(char *str);
void copy_str(char *dest,char *str);
int sum_of_numbers(char *arr);

int main(){
	char ans[MAX_LENGTH];
	char unit;
	int times;
	scanf("%c %d",&unit,&times);
	ans[0] = unit;
	for (int i = 1;i < times;i++){
		huge_sum(ans,ans,ans);
	}
	
	printf("%c ^ %d = %s\n",unit,times,ans);
	printf("The sum of these numbers is %d.\n",sum_of_numbers(ans));
	printf("Computing complete!\n");
	system("pause > nul");
	return 0;
}

/*
 * This function can compute the sum of two huge integer number.
 * To use it, you should prepare a pointer of a string which is answer,
 * and input two pointer of string in need of computing and the pointer of answer.
 */

void huge_sum(char *a,char *b,char *ans){
	int ca[MAX_DIGIT],cb[MAX_DIGIT],cans[MAX_DIGIT];
	int *p_ca,*p_cb;
	p_ca = ca;
	p_cb = cb;
	str_to_arr(a,p_ca);
	str_to_arr(b,p_cb);
	int carry = 0,digit = 0,temp = 0;
	int power = pow(10,DIGIT_UNIT);
	while (ca[digit]||cb[digit]){
		temp = ca[digit] + cb[digit] + carry;
		ca[digit] = 0;
		cb[digit] = 0;
		carry = temp/(float)power;
		cans[digit] = carry == 1 ? temp - power : temp; 
		digit++;
	}
	if (carry == 1) {
		cans[digit] = 1;
	}else{
		digit--;
	}
	
	char tp_ans[MAX_DIGIT],str[DIGIT_UNIT+1];
	int posi = 0;
	//Print and DELETE data.
	if (cans[digit]) {
		sprintf(str,"%d",cans[digit]);
		for (int i = 0;i < get_length(str);i++) tp_ans[posi++] = str[i];
		cans[digit] =0;
	}
	for (int i = digit-1;i >= 0;i--){
		sprintf(str,"%04d",cans[i]);
		for (int j = 0;j < DIGIT_UNIT;j++) tp_ans[posi++] = str[j];
		cans[i]=0;	
	}
	copy_str(ans,tp_ans);
}

/*
 * This function can change a string to an array.
 * To use it, you should prepare a pointer of an integer array which is destination,
 * and input a pointer of string.
 */

void str_to_arr(char *str,int *arr){
	char temp_str[DIGIT_UNIT]={0};
	int tp_num = 0;
	int str_length = get_length(str);
	int counter = (float)str_length/DIGIT_UNIT + (1 - 1.0 / DIGIT_UNIT);
	for (int i = 0;i < counter - 1;i++){
		for(int j = 1;j < DIGIT_UNIT + 1;j++){
			temp_str[DIGIT_UNIT - j] = *(str + str_length - (i * DIGIT_UNIT + j));
		}
		*(arr + i) = atoi(temp_str);
	}
	for (int j = 0;j < DIGIT_UNIT;j++) temp_str[j] = '0';
	for (int i = 1;i < str_length - (counter - 1) * DIGIT_UNIT + 1;i++){
		temp_str[DIGIT_UNIT - i] = *(str + str_length - (counter - 1) * DIGIT_UNIT - i);
	}
	*(arr + counter - 1) = atoi(temp_str);
}

int get_length(char *str){
	int length = 0;
	while (*(str+length)){
		length++;
	}
	return length;
}

void copy_str(char *dest,char *str){
	int i = 0;
	while (*(str + i)){
		*(dest + i) = *(str + i);
		i++;
	}
}

int sum_of_numbers(char *arr){
	int ans = 0,i = 0;
	while(*(arr + i)) ans += *(arr + i++) - 48;
	return ans;
}
