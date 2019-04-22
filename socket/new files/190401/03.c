#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值
//int main()
//{
//	int i;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (1.0 / i) * pow((-1),i - 1);
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//int main()
//{
//	int i;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			sum++;
//		}
//		if (i / 10 == 9)
//		{
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i,j,k;
//	for (i = 1; i <= 5; i++)
//	{
//		for (k = 1; k <= 5 - i; k++)
//		{
//			//printf(" ");
//			putchar(' ');
//		}
//		for (j = 1; j <= (2 * i - 1); j++)
//		{
//			
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, j, k;
//	for (i = 1; i <= 5; i++)
//	{
//		for (k = 1; k < i; k++)
//		{
//			putchar(' ');
//		}
//
//		for (j = 1; j <= 2 * 5 - 2 * i + 1; j++)
//		printf("*");
//		putchar('\n');
//	}
//	system("pause");
//	return 0;
//}
//求出0～999之间的所有“水仙花数”并输出。
//int main()
//{
//	int i;
//	int a, b, c;
//	for (i = 0; i < 1000; i++)
//	{
//		a = i / 100;
//		b = i / 10 % 10;
//		c = i % 10;
//		if (i == a * a * a + b * b * b + c * c * c)
//		{
//			printf("%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 2;
//	for (i = 0; i < 3;i ++)
//		{
//		sum += sum *10 + n;
//		}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
