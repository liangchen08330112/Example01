#include <stdio.h>
int main800(){
	int a;
	do
	{
		printf("\n������һ��������\n");
		scanf("%d", &a);
		if (a >= 90 && a <= 100)
			printf("����");
		else if (a>=80&&a<=89)
		{
			printf("����");
		}
		else if (a>=70&&a<=79)
		{
			printf("�е�");
		}
		else if (a>=60&&a<=69)
		{
			printf("����");
		}
		else if (a >= 0 && a <= 59)
		{
			printf("������");
		}
		else
		{
			printf("��Ч����");
		}
	} while (1);
	return 0;
}

int main9210(){
	printf("\n������һ��������\n");
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
		printf("������\n");
		break;
	case 6:
		printf("����\n");
		break;
	case 7:
		printf("�е�\n");
		break;
	case 8:
		printf("����\n");
		break;
	case 9:
		printf("����\n");
		break;
	default:
		break;
	}
	return 0;
}