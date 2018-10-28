#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE 20
#define MAX_COL 20

//int num_array[MAX_LINE][MAX_COL] = {8,2,22,97,38,15,0,40,0,75,4,5,7,78,52,12,50,77,91,8,49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,4,56,62,0,81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,3,49,13,36,65,52,70,95,23,4,60,11,42,69,24,68,56,1,32,56,71,37,2,36,91,22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80,24,47,32,60,99,3,45,2,44,75,33,53,78,36,84,20,35,17,12,50,32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70,67,26,20,68,2,62,12,20,95,63,94,39,63,8,40,91,66,49,94,21,24,55,58,5,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72,21,36,23,9,75,0,76,44,20,45,35,14,0,61,33,97,34,31,33,95,78,17,53,28,22,75,31,67,15,94,3,80,4,62,16,14,9,53,56,92,16,39,5,42,96,35,31,47,55,58,88,24,0,17,54,24,36,29,85,57,86,56,0,48,35,71,89,7,5,44,44,37,44,60,21,58,51,54,17,58,19,80,81,68,5,94,47,69,28,73,92,13,86,52,17,77,4,89,55,40,4,52,8,83,97,35,99,16,7,97,57,32,16,26,26,79,33,27,98,66,88,36,68,87,57,62,20,72,3,46,33,67,46,55,12,32,63,93,53,69,4,42,16,73,38,25,39,11,24,94,72,18,8,46,29,32,40,62,76,36,20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,4,36,16,20,73,35,29,78,31,90,1,74,31,49,71,48,86,81,16,23,57,5,54,1,70,54,71,83,51,54,69,16,92,33,48,61,43,52,1,89,19,67,48};
//int num_array[MAX_LINE][MAX_COL] = {1,2,4,2,7,7,18,0,8,3,6,4,9,1,9,47,19,3,62,4,5,11,1,2,3};
int num_array[MAX_LINE][MAX_COL] = {
        {8,   2, 22, 97, 38, 15,  0, 40,  0, 75,  4,  5,  7, 78, 52, 12, 50, 77, 91, 8},
        {49, 49, 99, 40, 17, 81, 18, 57, 60, 87, 17, 40, 98, 43, 69, 48,  4, 56, 62, 0},
        {81, 49, 31, 73, 55, 79, 14, 29, 93, 71, 40, 67, 53, 88, 30,  3, 49, 13, 36, 65},
        {52, 70, 95, 23,  4, 60, 11, 42, 69, 24, 68, 56,  1, 32, 56, 71, 37,  2, 36, 91},
        {22, 31, 16, 71, 51, 67, 63, 89, 41, 92, 36, 54, 22, 40, 40, 28, 66, 33, 13, 80},
        {24, 47, 32, 60, 99,  3, 45,  2, 44, 75, 33, 53, 78, 36, 84, 20, 35, 17, 12, 50},
        {32, 98, 81, 28, 64, 23, 67, 10, 26, 38, 40, 67, 59, 54, 70, 66, 18, 38, 64, 70},
        {67, 26, 20, 68,  2, 62, 12, 20, 95, 63, 94, 39, 63,  8, 40, 91, 66, 49, 94, 21},
        {24, 55, 58,  5, 66, 73, 99, 26, 97, 17, 78, 78, 96, 83, 14, 88, 34, 89, 63, 72},
        {21, 36, 23,  9, 75,  0, 76, 44, 20, 45, 35, 14,  0, 61, 33, 97, 34, 31, 33, 95},
        {78, 17, 53, 28, 22, 75, 31, 67, 15, 94,  3, 80,  4, 62, 16, 14,  9, 53, 56, 92},
        {16, 39,  5, 42, 96, 35, 31, 47, 55, 58, 88, 24,  0, 17, 54, 24, 36, 29, 85, 57},
        {86, 56,  0, 48, 35, 71, 89,  7,  5, 44, 44, 37, 44, 60, 21, 58, 51, 54, 17, 58},
        {19, 80, 81, 68,  5, 94, 47, 69, 28, 73, 92, 13, 86, 52, 17, 77,  4, 89, 55, 40},
        {4,  52,  8, 83, 97, 35, 99, 16,  7, 97, 57, 32, 16, 26, 26, 79, 33, 27, 98, 66},
        {88, 36, 68, 87, 57, 62, 20, 72,  3, 46, 33, 67, 46, 55, 12, 32, 63, 93, 53, 69},
        {4,  42, 16, 73, 38, 25, 39, 11, 24, 94, 72, 18,  8, 46, 29, 32, 40, 62, 76, 36},
        {20, 69, 36, 41, 72, 30, 23, 88, 34, 62, 99, 69, 82, 67, 59, 85, 74,  4, 36, 16},
        {20, 73, 35, 29, 78, 31, 90,  1, 74, 31, 49, 71, 48, 86, 81, 16, 23, 57,  5, 54},
        {1,  70, 54, 71, 83, 51, 54, 69, 16, 92, 33, 48, 61, 43, 52,  1, 89, 19, 67, 48}
    };


int max_array_h[MAX_LINE] = {0},max_array_v[MAX_LINE] = {0},max_array_ld[MAX_LINE] = {0},max_array_rd[MAX_LINE] = {0},compute_array[MAX_LINE] = {0};
unsigned long max_ans_h = 0,max_ans_v = 0,max_ans_ld = 0,max_ans_rd = 0;


unsigned long Compute(int X);
unsigned long ComputeInHorizontal(int X);
unsigned long ComputeInVertical(int X);
unsigned long ComputeInLeftDiagonal(int X);
unsigned long ComputeInRightDiagonal(int X);

int main(){
	int X;
	unsigned long ans_h = 0,ans_v = 0,ans_ld = 0, ans_rd =0;
	scanf("%d",&X);
	ans_h = ComputeInHorizontal(X);
	ans_v = ComputeInVertical(X);
	ans_ld = ComputeInLeftDiagonal(X);
	ans_rd = ComputeInRightDiagonal(X);
	//for (int i = 0;i < X;i++) printf("%d ",max_array[i]);
	printf("\n%lu\n%lu\n%lu\n%lu\nPress Any Key to Exit ...",ans_h,ans_v,ans_ld,ans_rd);
	system("pause > nul");
	return 0;
}

unsigned long ComputeInHorizontal(int X){
	bool flag = true;
	unsigned long temp_ans = 0;
	for (int i = 0;i < MAX_LINE;i++){
		for (int j = 0;j < MAX_COL - X + 1;j++){
			for (int k = 0;k < X;k++){
				if (num_array[i][j + k] == 0) flag = false;
			}
			if (flag){
				for (int m = 0;m < X;m++) compute_array[m] = num_array[i][j + m];
				temp_ans = Compute(X);
				if (temp_ans > max_ans_h){
					max_ans_h = temp_ans;
					for (int n = 0;n < X;n++) max_array_h[n] = num_array[i][j + n];
				}
			}
			flag = true;
		}
	}
	return max_ans_h;
}


unsigned long ComputeInVertical(int X){
	bool flag = true;
	unsigned long temp_ans = 0;
	for (int i = 0;i < MAX_COL;i++){
		for (int j = 0;j < MAX_LINE - X + 1;j++){
			for (int k = 0;k < X;k++){
				if (num_array[j + k][i] == 0) flag = false;
			}
			if (flag){
				for (int m = 0;m < X;m++) compute_array[m] = num_array[j + m][i];
				temp_ans = Compute(X);
				if (temp_ans > max_ans_v){
					max_ans_v = temp_ans;
					for (int n = 0;n < X;n++) max_array_v[n] = num_array[j + n][i];
				}
			}
			flag = true;
		}
	}
	return max_ans_v;
}


unsigned long ComputeInLeftDiagonal(int X){
	bool flag = true;
	unsigned long temp_ans = 0;
	for (int i = 0;i < MAX_LINE - X + 1;i++){
		for (int j = 0;j < MAX_COL - X + 1;j++){
			for (int k = 0;k < X;k++){
				if (num_array[i + k][j + k] == 0) flag = false;
			}
			if (flag){
				for (int m = 0;m < X;m++) compute_array[m] = num_array[i + m][j + m];
				temp_ans = Compute(X);
				if (temp_ans > max_ans_ld){
					max_ans_ld = temp_ans;
					for (int n = 0;n < X;n++) max_array_ld[n] = num_array[i + n][j + n];
				}
			}
			flag = true;
		}
	}
	return max_ans_ld;
}

unsigned long ComputeInRightDiagonal(int X){
	bool flag = true;
	unsigned long temp_ans = 0;
	for (int i = MAX_LINE - X;i < MAX_LINE;i++){
		for (int j = 0;j < MAX_COL - X + 1;j++){
			for (int k = 0;k < X;k++){
				if (num_array[i - k][j + k] == 0) flag = false;
			}
			if (flag){
				for (int m = 0;m < X;m++) compute_array[m] = num_array[i - m][j + m];
				temp_ans = Compute(X);
				if (temp_ans > max_ans_rd){
					max_ans_rd = temp_ans;
					for (int n = 0;n < X;n++) max_array_rd[n] = num_array[i - n][j + n];
				}
			}
			flag = true;
		}
	}
	
	return max_ans_rd;
}

unsigned long Compute(int X){
	unsigned long product_ans = 1;
	for (int i = 0;i < X;i++){
		product_ans *= compute_array[i];
		compute_array[i] = 0;
	}
	return product_ans;
}
