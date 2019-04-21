#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	char a, b, c;
//	a = 'B';
//	b = 'O';
//	c = 'Y';
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 12345;
//	printf("%d\n", a);
//	printf("%4d\n", a);
//	printf("%6d\n", a);
//	system("pause");
//	return 0;
//}

//输出乘法口诀表
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %2d  ", j, i, i * j);
//		}
//		putchar('\n');
//	}
//	system("pause");
//	return 0;
//}
//判断1000年-- - 2000年之间的闰年
//int main()
//{
//	int n;
//	for (n = 1000; n <= 2000; n++)
//	{
//		if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		{
//			printf("%d是闰年\n", n);
//		}
//		else
//		{
//			printf("%d不是闰年\n", n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//给定两个整形变量的值，将两个值的内容进行交换。
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a = %d   b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//int  main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d   b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//求10 个整数中最大值。
//int main()
//{
//	int arr[10] = { 1, 2, 39, 4, 5, 6, 7, 8, 9 ,10};
//	int i, j;
//	int tmp;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	//printf("%d\n", arr[0]);
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
