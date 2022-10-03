#include <stdio.h>
//案例8：偷天换日（异或运算）
int main8(){
	int a, b;
	printf("请输入a与b的值:\n");
	scanf("%d%d", &a, &b);
	a = a^b;
	b = b^a;
	a = a^b;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}

//案例9：比大小（三目运算符）
int main9(){
	int a, b;
	printf("请输入两个整数：\n");
	scanf("%d%d", &a, &b);
	printf("%d较大\n", (a > b ? a : b));
	return 0;
}

int main1112(){
	int ch = 'A';
	printf("%c\n", ch + 32);
	printf("%d\n", ch + 32);
	return 0;
}