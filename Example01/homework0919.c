#include <stdio.h>
int main800(){
	int a;
	do
	{
		printf("\n请输入一个分数：\n");
		scanf("%d", &a);
		if (a >= 90 && a <= 100)
			printf("优秀");
		else if (a>=80&&a<=89)
		{
			printf("良好");
		}
		else if (a>=70&&a<=79)
		{
			printf("中等");
		}
		else if (a>=60&&a<=69)
		{
			printf("及格");
		}
		else if (a >= 0 && a <= 59)
		{
			printf("不及格");
		}
		else
		{
			printf("无效分数");
		}
	} while (1);
	return 0;
}

int main9210(){
	printf("\n请输入一个分数：\n");
	int score;
	scanf("%d", &score);
	switch (score/10)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("不及格\n");
		break;
	case 6:
		printf("及格\n");
		break;
	case 7:
		printf("中等\n");
		break;
	case 8:
		printf("良好\n");
		break;
	case 9:
		printf("优秀\n");
		break;
	default:
		break;
	}
	return 0;
}