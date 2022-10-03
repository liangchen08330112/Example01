#include <stdio.h>
//案例4：sizeof
int main921(){
	int a = 0;
	short b = 1;
	double c = 0.01;
	float d = 0.1;
	printf("char:%d字节\n", sizeof(char));
	printf("short:%d字节\n", sizeof(5.0));
	printf("int:%d字节\n", sizeof(int));
	printf("long:%d字节\n", sizeof(long));
	printf("float:%d字节\n", sizeof(float));
	printf("double:%d字节\n", sizeof(double));
	printf("int:%d字节\n", sizeof(a));
	printf("short:%d字节\n", sizeof(b));
	printf("double:%d字节\n", sizeof(c));
	printf("float:%d字节\n", sizeof(d));
	return 0;
}

//案例5：求圆的周长和面积
int main222(){
	float r, S, l;
	printf("请输入圆的半径...\n");
	scanf("%f", &r);
	S = 3.14*r*r;
	l = 2 * 3.14*r;
	printf("圆的面积为：%0.2f\n", S);
	printf("圆的周长为：%0.2f\n", l);
	return 0;
}

//案例6：算术运算
int main333(){
	int num1, num2;
	printf("请输入两个整数...\n");
	scanf("%d%d", &num1, &num2);
	printf("两整数和为：%d\n", num1 + num2);
	printf("两整数差为：%d\n", num1 - num2);
	printf("两整数积为：%d\n", num1 * num2);
	printf("两整数商为：%d\n", num1 + num2);
	printf("两整数商为：%0.2f\n", (float)num1 / (float)num2);
	printf("两整数取余：%d\n", num1%num2);
	return 0;
}

//案例7：自增与自减
int main7(){
	int num;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
	printf("第一个表达式结果：%d\n", --num);
	printf("第二个表达式结果：%d\n", (++num) + (num++)*(num--));
	return 0;
}

