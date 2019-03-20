#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*
//int main()
//{
//	int i, j;
//	for (i = 0; i <= 13; i++)
//	{
//		if (i <= 7)
//		{
//			for (j = 1; j < (2 * i); j++)
//			{
//				printf("*");
//
//			}
//		}
//		else
//		{
//			for (j = 0; j <= (2 * 13 - 2 * i ); j ++)
//			{
//				printf("*");
//
//			}
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//int main()
//{
//	int a, b, c, i;
//	for (i = 0; i <= 999; i++)
//	{
//		a = i % 10;
//		b = i / 10 % 10;
//		c = i / 100;
//		if (a * a * a + b * b * b + c * c * c == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	
//	system("pause");
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int s = 0;
//	int sum = 0;
//	int i, j,a;
//	scanf("%d", &a);
//	for (i = 0; i < 5; i++)
//	{
//		s = s * 10 + a;
//		sum += s;
//
//	}
//	printf("%d", sum);
//
//	system("pause");
//	return 0;
//}




//int main()
//{
//	int i,j;
//	int n = 3;
	/*for (i = n - 1; i >= 0; i--)
	{
		for (j = 1; j < n - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int i, t;
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int b[5] = { 6, 7, 8, 9, 0 };
//	for (i = 0; i < 5; i++)
//	{
//		t = a[i];
//		a[i] = b[i];
//		b[i] = t;
//	}
//	printf("交换后a数组为：");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", a[i]);
//	}
//	printf("交换后a数组为：");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", b[i]);
//	}
//	system("pause");
//	return 0;
//}

//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//int main()
//{
//	int i, t = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			t += 1 / (-1)*i;
//		}
//		else
//		{
//			t += 1 / i;
//		}	
//	}
//	printf("%d", t);
//	system("pause");
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//int main()
//{
//	int i, sum = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 10 == 0 || i / 10 == 0)
//		{
//			sum++;
//		}
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
