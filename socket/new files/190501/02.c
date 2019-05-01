#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//用筛法求100之内的素数。
//int main()
//{
//	int i, j, n;
//	int arr[101];
//	for (i = 1; i <= 100; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 2; i <= sqrt(100); i++)
//	{
//		for (j = i + 1; j <= 100; j++)
//		{
//			if (arr[i] != 0 && arr[j] != 0)
//			if (arr[j] % arr[i] == 0)
//				arr[j] = 0;
//		}
//	}
//		for (i = 2, n = 0; i <= 100; i++)
//		{
//			if (arr[i] != 0)
//			{
//				printf(" % 5d", arr[i]);
//				n++;
//			}
//			if (n == 10)          /*此处if 语句的作用是在输出10个数后换行*/
//			{
//				printf("\n");
//				n = 0;
//			}
//		}
//		system("pause");
//		return 0;
//}
//求一个3×3矩阵对角线元素之和
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i,j;
//	int sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i == j ||(i + j == 2))
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d\n", sum - arr[3 / 2][3 / 2]);
//	system("pause");
//	return 0;
//}
//有一个已排好序的数组，今输入一个数，要求按原来排序的规律将它插入数组中。
int main()
{
	int tmp1, tmp2;
	int i,j;
	int a[11] = { 1, 2, 3, 4, 5, 6, 8, 8, 9 , 11};
	int n = 0;
	int end = a[9];
	if (end < n)
	{
		a[10] = n;
	}
	else
	{
		for (i = 0; i < 10; i++)
		{
			if (a[i] > n)
			{
				tmp1 = a[i];
				a[i] = n;
				for (j = i + 1; j < 11; j++)
				{
					tmp2 = a[j];
					a[j] = tmp1;
					tmp1 = tmp2;
				}
				break;
			}
		}
	}
	for (i = 0; i < 11; i++)
	{
		printf("%d ", a[i]);
	}
		system("pause");
	return 0;
}
