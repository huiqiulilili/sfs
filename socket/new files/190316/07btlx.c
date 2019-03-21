#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//void printlog(int a[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", a[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i;
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int b[5] = { 6, 7, 8, 9, 0 };
//	int c[5];
//	for (i = 0; i < 5; i++)
//	{
//		c[i] = a[i];
//		a[i] = b[i];
//		b[i] = c[i];
//	}
//	printlog(a, 5);
//	printlog(b, 5);
//
//	system("pause");
//	return 0;
//}

//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//注意类型   使用到了flag 当做旗帜
//int main()
//{
//	int i;
//	float tmp = 0;
//	float sum = 0;
//	int  flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		//tmp = 1.0 / i * flag;
//		tmp = 1.0 / i * (i % 2 ? 1 : -1);
//		sum += tmp;
//		flag *= -1;
//	}
//	printf("%lf", sum);
//	system("pause");
//	return 0;
//}
//编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//思考此题为什么不能用if else
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}

//倒立金字塔
//int main()
//{
//	int i,j;
//	int n;
//	scanf("%d", &n);
//	for (i = n; i >= 0; i--)//注意此处的奥妙
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1;j ++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i,j;
//	int n;
//	scanf("%d", &n);
//	for (i = 1; i <=n; i++)//注意此处的奥妙
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = n ; i >= 0; i--)//注意此处的奥妙
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1;j ++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//回文数字的判断

//int main()
//{
//	int a[10];
//	int flag = 0;
//	int count = 0;
//	int tmp, i, j,n= 0;
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	for (i = n; i; i = i / 10)
//	{
//		tmp = i % 10;
//		a[count] = tmp;
//		count++;
//	}
//	for (j = 0; j < count ; j++)
//	{
//		if (a[j] == a[count - j - 1])
//		{
//			flag++;
//		}
//		
//	}
//	if (flag == count)
//	{
//		printf("%d为回文序列", n);
//	}
//	else
//	{
//		printf("%d不是回文序列", n);
//
//	}
//	
//	system("pause");
//	return 0;
//}

//判断n位水仙花数
//int main()
//{
//	int a[10] = {0};
//	int count = 0;
//	int tmp, i, j, n = 0 ,k;
//	int sum = 0;
//
//	for (k = 1; k < 100000000; k++)
//	{
//		for (i = k; i; i = i / 10)
//		{
//			a[count] = i % 10;
//			count++;
//		}
//		for (j = 0; j < count; j++)
//		{
//			sum += pow(a[j], count);
//		}
//		if (sum == k)
//		{
//			printf("%d是水仙花数", k);
//		}
//
//		count = sum = 0;
//	}
//	system("pause");
//	return 0;
//}

//m  n
  //2  5  2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int i;
//	int sum = 0;
//	int tmp = 0;
//	int m, n;
//	scanf("%d%d", &m, &n);
//	for (i = 0; i < n; i++)
//	{
//		tmp = tmp * 10  + m;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
