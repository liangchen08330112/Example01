#include <stdio.h>
//����8��͵�컻�գ�������㣩
int main8(){
	int a, b;
	printf("������a��b��ֵ:\n");
	scanf("%d%d", &a, &b);
	a = a^b;
	b = b^a;
	a = a^b;
	printf("a=%d,b=%d\n", a, b);
	return 0;
}

//����9���ȴ�С����Ŀ�������
int main9(){
	int a, b;
	printf("����������������\n");
	scanf("%d%d", &a, &b);
	printf("%d�ϴ�\n", (a > b ? a : b));
	return 0;
}

int main1112(){
	int ch = 'A';
	printf("%c\n", ch + 32);
	printf("%d\n", ch + 32);
	return 0;
}