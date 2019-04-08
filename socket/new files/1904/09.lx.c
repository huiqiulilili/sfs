#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int i = 1;
//	int a[10][10] = { 0 };
//	int j = 0;
//	//scanf("%d", &n);
//	for (i = 0; i < 10;i ++)
//	{
//		a[i][0] = 1;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				a[i][j] = a[0][0];
//			else if (i >= 1 && j >= 1 && i != j)
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//			else if(j == i)
//				a[i][j] = a[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", a[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][0] = 1;
//				printf("%d", arr[i][0]);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%5d", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
