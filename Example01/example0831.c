//�ƿ�C4996��ȫ���Ĵ��룬�ٵ���scanf()��
//#define _CRT_SECURE_NO_WARNINGS
//Ҳ��������Ŀ-->����-->C/C++�µ�Ԥ�������ﶨ��رհ�ȫ���Ĵ��롣
#include <stdio.h>
//����01������ѧ�źͳɼ������
int main3(){
	long num = 0;
	float score = 0;
	printf("���������ͬѧ��ѧ�źͳɼ�...\n");
	scanf("%d%f", &num, &score);
	printf("���ͬѧ��ѧ����%d���ɼ���%.1f\n", num, score);
	return 0;
}

//����02����дתСд
int main2(){
	char c;
	printf("������һ����д��ĸ...\n");
	scanf("%c", &c);
	//printf("%c\n", c + 32);  //ת����Сд���
	printf("%c\n", c - 32); //ת���ɴ�д���
	system("pause");
	return 0;
}