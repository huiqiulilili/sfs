#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//写两个函数，分别求两个整数的最大公约数和最小公倍数
//int yueshu(int a, int b)
//{
//	int max;
//	int i;
//	max = a < b ? a : b;
//	for (i = max; i < 0; i--)
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			return i;
//			break;
//		}
//	}
//}
//int beishu(int a, int b)
//{
//	int min;
//	int i;
//	min = a > b ? a : b;
//	for (i = min; i < 0; i--)
//	{
//		if (min % a == 0 && min % b == 0)
//		{
//			return i;
//			break;
//		}
//	}
//}
//int main()
//{
//	int a = 6;
//	int b = 12;
//	int max = yueshu(a, b);
//	printf("%d\n", max);
//	int min = beishu(a, b);
//	printf("%d\n", min);
//	system("pause");
//	return 0;
//}
//写一个判素数的函数，在主函数输入一个整数，输出是否素数的信息。
//int panduan(int n)
//{
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (panduan(n))
//	{
//		printf("%d是素数\n", n);
//	}
//	else
//	{
//		printf("%d是不素数\n", n);
//	}
//	system("pause");
//	return 0;
//}
//写一函数，使给定的一个二维数组（3×3）转置，即行列互换
void zhuanhuan(int a[3][3])
{
	int i,j,t;
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
	}
}
int main()
{
	int i, j;
	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	zhuanhuan(a);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
