//水仙花数
#include <stdio.h>
int main922(){
	int num;
	int a, b, c;
	printf("水仙花数：\n");
	for (num = 100; num <= 999; num++){
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (num == (a*a*a + b*b*b + c*c*c)){
			printf("%d ", num);
		}
	}
	printf("\n");
	return 0;
}