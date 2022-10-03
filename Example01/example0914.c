#include<stdio.h>
int main914(){
	int num;
	int ge, shi, bai;
	printf("\n请输入一个整数：\n");
	scanf("%d", &num);
	ge = num % 10;
	shi = num / 10 % 10;
	bai = num / 100;
	printf("%d\n", 100 * ge +10*shi + bai);
	return 0;
}