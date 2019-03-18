#define _CRT_SECURE_NO_WARNINGS 1
//sizeof
//int main()
//{
//	//printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	system("pause");
//	return 0;
//}

//~
//所有正整数的按位取反是其本身 + 1的负数
//所有负整数的按位取反是其本身 + 1的绝对值
//零的按位取反是 - 1
//int main()
//{
//	int a = -3;
//	int v;
//	v = ~a;
//	printf("v = %d\n", v);
//	system("pause");
//	return 0;
//}

//*  间接访问操作符  解引用操作符

int main()
{ 
	int a = 1;
	int * b = &a;
	*b = 2019;
	printf("%d", a);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
//函数
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a, b;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	sum = add(a, b);
//	printf("sum = %d", sum);
//	system("pause");
//	return 0;
//}
//操作符

//int main()
//{
//	int a = 5, b = 2;
//	float c;
//	c = 5.0 / 2;
//	printf("%f\n", c);
//	system("pause");
//	return 0;
//}

//移位操作符（左）二进制移位
//int main()
//{
//	int a = 10;
//	int b;
//	b = a << 1;
//	printf("%d", b);
//	system("pause");
//	return 0;
//}

//位操作符
int main()
{
	int a = 3;
	int b = 5;
	int x, y, z;
	x = a & b;
	y = a | b;
	z = a ^ b;
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);

	system("pause");
	return 0;
}
