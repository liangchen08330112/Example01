//����ͬ����������ʮ��ͷ�����о�ʮ���㡣�ʼ��ø����Σ�
#include<stdio.h>
int main550(){
	int chicks, rabbits;
	for (chicks = 0; chicks <= 35; chicks++)
	{
		for (rabbits = 0; rabbits <= 35; rabbits++)
		{
			if (2 * chicks + 4 * rabbits == 94){
				printf("����%2d���ã�%2d\n", chicks, rabbits);
			}
		}
	}
	getchar();
	return 0;
}

//��������
int main00921(){
	int x;
	printf("������Ҫ���������x��\n");
	scanf("%d", &x);
	//���ѭ����������x
	for (int i = 1; i <= x; i++)
	{
		//�ڲ�ѭ����ÿ�����6����*��������һ�Ρ�
		for (int j = 1; j <= 6; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getchar();
	return 0;
}