#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//1.调整数组使奇数全部都位于偶数前面。
//void adjust(int arr[], int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			for (j = i + 1; j < n; j++)
//			{
//				int tmp;
//				if (arr[j] % 2 == 1)
//				{
//					tmp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = tmp;
//					break;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	int i;
//	int arr[10] = { 2,34,5,67,6,8,3,27 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	adjust(arr,n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
////杨氏矩阵 
int h(int arr[3][3], int n)
{
	int i = 0, j = 2;
	int tmp = arr[0][0];
	for (i = 0; i < 3; i++)
	{
		if (arr[i][2] == n)
		{
			return 0;
		}
		if (arr[i][2] < n && j >= 0)
		{
			tmp = arr[i + 1][j];
		}
		if (arr[i][j] > n && j >= 0)
		{
			tmp = arr[i][j - 1];
		}
	}
	return 0;
}
int main()
{
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = 10;
	int c = h(arr, n);
	if (c == 0)
	{
		printf("没找到%d\n",n);
	}
	else
	{
		printf("找到了%d\n",n);
	}
	system("pause");
	return 0;
}
