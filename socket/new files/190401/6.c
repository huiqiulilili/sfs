#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int left[10] = { 0 };
//	int right[10] = { 0 };
//	int i, j, k;
//	int countl = 0;
//	int countr = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2)
//		{
//			left[countl++] = arr[i];
//		}
//		else
//		{
//			right[countr++] = arr[i];
//		}
//	}
//	for (i = 0; i < countl; i++)
//	{
//		printf("%d ", left[i]);
//	}
//	for (i = 0; i < countr; i++)
//	{
//		printf("%d ", right[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0, j = 9;
//	int tmp;
//	while (i < j)
//	{
//		while (arr[i] % 2)
//		{
//			i++;
//		}
//		while(arr[j] % 2 == 0)
//		{
//			j--;
//		}
//		if (i < j)
//		{
//			tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0, j = 9;
//	int tmp;
//	while (i < j)
//	{
//		while (arr[i++] % 2);
//		while (arr[j--] % 2 == 0);
//		if (i-1 < j+1)
//		{
//			tmp = arr[i-1];
//			arr[i-1] = arr[j+1];
//			arr[j+1] = tmp;
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
int search(int arr[][3], int x, int y, int n)
{
	int i = 0,j = 2;
	while (i < y&&j >=0)
	{
		if (arr[i][j] < n)
		{
			i++;
		}
		if (arr[i][j] > n)
		{
			j--;
		}
		if (arr[i][j] == n)
		{
			return 1;
		}

	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1, 2, 3,
		2, 3, 4,
		3, 4, 5 };
	int n = 5;
	if (search(arr, 3, 3, n))
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	system("pause");
	return 0;
}
