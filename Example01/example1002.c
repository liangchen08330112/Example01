#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main102() {
	int i, j;
	for (i = 1; i <= 9; i++)   //��������i
	{
		for (j = 1;j <= i;j++) {    //��������j������j������i��Ӱ��
			printf("%d*%d=%d ", i, j, i * j);   //���С�žŵ�ֵ
		}
		printf("\n");  //����һ�У�����һ�Ρ�
	}
	return 0;
}

int main1002() {
	srand((unsigned)time(NULL) * 10);//ʹ��ϵͳ��ʱ����ֵ��Ϊ�����������
	int r, i, j, n;//r��ʾ�������nΪ�������
	r = rand() % 100;
	for (i = 1; i <= 10; i++) {
		printf("��һ���������\n");
		scanf("%d", &n);
		if (n == r) {
			printf("�����ˣ�\n"); break;
		}
		else {
			if (n > r) {
				printf("���ˡ�\n");
			}
			else {
				printf("С�ˡ�\n");
			}
		}
	}
	printf("��Ϸ����\n");  //������ѭ���еĴ����߼����룬�������Ϸ������
	return 0;
}

//ʣ�ඨ�����ﲻ֪���Σ���������һ������������������������������м��Σ���100�������еĽ⡣
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