#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//int main()
//{
//	int n;
//	int i, j;
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//使用函数实现两个数的交换。
//void jiaohuan(int *p1, int *p2)
//{
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int* p1 = &i;
//	int* p2 = &j;
//	printf("交换前：\n");
//	printf("i = %d  j = %d", i, j);
//	jiaohuan(p1, p2);
//	printf("交换后：\n");
//	printf("i = %d  j = %d", i, j);
//	system("pause");
//	return 0;
//}
//实现一个函数判断year是不是润年。

//int leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		return year;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int n;
//	scanf("%d", &year);
//	n = leap_year(year);
//	if (n != 0)
//	 printf("%d 是闰年\n",year );
//	else
//	{
//		printf("%d 不是闰年\n", year);
//	}
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//void init(char a[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%c", &a[i]);
//	}
//}
//void reverse(char a[], int n)
//{
//	int i = 0;
//	int m = n - 1;
//	for (i = 0; i <= n/2; i++)
//	{
//		char c;
//		c = a[i];
//		a[i] = a[m];
//		a[m] = c;
//		m--;
//	}
//}
//void  empty(char a[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		a[i] = '\0';
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[10];
//	empty(arr, 10);
//	init(arr, 10);
//	reverse(arr, 10);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//实现一个函数，判断一个数是不是素数。
//int prime_number(int n)
//{
//	int i;
//	for(i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return -1;
//		}
//	}
//	return n;
//}
//int main()
//{
//	int n = 0;
//	int k ;
//	scanf("%d", &n);
//	k = prime_number(n);
//	if (k != -1)
//	{
//		printf("%d是素数\n", n);
//	}
//	else
//	{
//		printf("%d不是素数\n", n);
//
//	}
//	system("pause");
//	return 0;
//}
