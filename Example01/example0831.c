//绕开C4996安全检查的代码，再调用scanf()。
//#define _CRT_SECURE_NO_WARNINGS
//也可以在项目-->属性-->C/C++下的预处理器里定义关闭安全检查的代码。
#include <stdio.h>
//案例01：输入学号和成绩并输出
int main3(){
	long num = 0;
	float score = 0;
	printf("请输入梁宸同学的学号和成绩...\n");
	scanf("%d%f", &num, &score);
	printf("梁宸同学的学号是%d，成绩是%.1f\n", num, score);
	return 0;
}

//案例02：大写转小写
int main2(){
	char c;
	printf("请输入一个大写字母...\n");
	scanf("%c", &c);
	//printf("%c\n", c + 32);  //转换成小写输出
	printf("%c\n", c - 32); //转换成大写输出
	system("pause");
	return 0;
}