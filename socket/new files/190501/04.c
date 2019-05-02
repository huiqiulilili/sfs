#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//有一个已排好序的数组，今输入一个数，要求按原来排序的规律将它插入数组中。
//int main()
//{
//	int a[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int n = 10;
//	int end = a[9];
//	int i,j;
//	if (end <= n)
//	{
//		a[10] = n;
//	}
//	else 
//	{
//		for (i = 9; i >= 0; i--)
//		{
//			if (a[i] < n)
//			{
//				for (j = 10; j >= i + 1; --j)
//				{
//					a[j] = a[j - 1];
//				}
//				a[i + 1] = n;
//				break;
//			}
//		}
//	}
//	for (i = 0; i < 11; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	system("pause");
//	return 0;
//}
//将一个数组中的值按逆序重新存放。
//int main()
//{
//	int a[5] = { 0 };
//	int b[5] = { 1, 2, 3, 4, 5 };
//	int tmp;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		a[i] = b[4 - i];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int tmp;
//	int i;
//	int left = 0;
//	int right = 4;
//	while (left < right)
//	{
//		tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int i, j;
	int line = 5;
	int a[5][5] = { 0 };
	a[0][0] = 1;
	a[1][0] = 1;
	a[1][1] = 1;
	for (i = 2; i < line; i++)
	{
		a[i][0] = 1;
		for (j = 0; j < line; j++)
		{
			if (i == j)
				a[i][j] = 1;
			else{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}

		}
	}
	for (i = 0; i < line; i++)
	{
		for (j = 0; j < line; j++)
		{
			if (a[i][j] != 0)
			{
				printf("%d ", a[i][j]);
			}
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}
