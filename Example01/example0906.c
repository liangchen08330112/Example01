#include <stdio.h>
//����4��sizeof
int main921(){
	int a = 0;
	short b = 1;
	double c = 0.01;
	float d = 0.1;
	printf("char:%d�ֽ�\n", sizeof(char));
	printf("short:%d�ֽ�\n", sizeof(5.0));
	printf("int:%d�ֽ�\n", sizeof(int));
	printf("long:%d�ֽ�\n", sizeof(long));
	printf("float:%d�ֽ�\n", sizeof(float));
	printf("double:%d�ֽ�\n", sizeof(double));
	printf("int:%d�ֽ�\n", sizeof(a));
	printf("short:%d�ֽ�\n", sizeof(b));
	printf("double:%d�ֽ�\n", sizeof(c));
	printf("float:%d�ֽ�\n", sizeof(d));
	return 0;
}

//����5����Բ���ܳ������
int main222(){
	float r, S, l;
	printf("������Բ�İ뾶...\n");
	scanf("%f", &r);
	S = 3.14*r*r;
	l = 2 * 3.14*r;
	printf("Բ�����Ϊ��%0.2f\n", S);
	printf("Բ���ܳ�Ϊ��%0.2f\n", l);
	return 0;
}

//����6����������
int main333(){
	int num1, num2;
	printf("��������������...\n");
	scanf("%d%d", &num1, &num2);
	printf("��������Ϊ��%d\n", num1 + num2);
	printf("��������Ϊ��%d\n", num1 - num2);
	printf("��������Ϊ��%d\n", num1 * num2);
	printf("��������Ϊ��%d\n", num1 + num2);
	printf("��������Ϊ��%0.2f\n", (float)num1 / (float)num2);
	printf("������ȡ�ࣺ%d\n", num1%num2);
	return 0;
}

//����7���������Լ�
int main7(){
	int num;
	printf("������һ��������\n");
	scanf("%d", &num);
	printf("��һ�����ʽ�����%d\n", --num);
	printf("�ڶ������ʽ�����%d\n", (++num) + (num++)*(num--));
	return 0;
}

