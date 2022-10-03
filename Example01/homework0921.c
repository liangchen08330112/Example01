//鸡兔同笼：上有三十五头，下有九十四足。问鸡兔各几何？
#include<stdio.h>
int main550(){
	int chicks, rabbits;
	for (chicks = 0; chicks <= 35; chicks++)
	{
		for (rabbits = 0; rabbits <= 35; rabbits++)
		{
			if (2 * chicks + 4 * rabbits == 94){
				printf("鸡：%2d；兔：%2d\n", chicks, rabbits);
			}
		}
	}
	getchar();
	return 0;
}

//输出五角星
int main00921(){
	int x;
	printf("请输入要输出的行数x：\n");
	scanf("%d", &x);
	//外层循环控制行数x
	for (int i = 1; i <= x; i++)
	{
		//内层循环，每输出完6个“*”，换行一次。
		for (int j = 1; j <= 6; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getchar();
	return 0;
}