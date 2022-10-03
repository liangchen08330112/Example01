#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main102() {
	int i, j;
	for (i = 1; i <= 9; i++)   //控制行数i
	{
		for (j = 1;j <= i;j++) {    //控制列数j，列数j受行数i的影响
			printf("%d*%d=%d ", i, j, i * j);   //输出小九九的值
		}
		printf("\n");  //打完一行，换行一次。
	}
	return 0;
}

int main1002() {
	srand((unsigned)time(NULL) * 10);//使用系统定时器的值作为随机数的种子
	int r, i, j, n;//r表示随机数，n为输入的数
	r = rand() % 100;
	for (i = 1; i <= 10; i++) {
		printf("猜一下这个数：\n");
		scanf("%d", &n);
		if (n == r) {
			printf("猜中了！\n"); break;
		}
		else {
			if (n > r) {
				printf("大了。\n");
			}
			else {
				printf("小了。\n");
			}
		}
	}
	printf("游戏结束\n");  //若不按循环中的代码逻辑输入，输出“游戏结束”
	return 0;
}

//剩余定理：有物不知几何，三三数余一，五五数余二，七七数余三，问物有几何？求100以内所有的解。
int main() {
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 1) {
			if (i % 5 == 2) {
				if (i % 7 == 3) {
					printf("%5d",i);
				}
			}
		}
	}
	return 0;
}