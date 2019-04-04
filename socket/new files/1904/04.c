#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	system("color c");
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[3][3]));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%p\n", &arr[i][j]);
//		}
//	}
//	system("color fa");
//	system("pause");
//	return 0;
//}
int main()
{
	int n = 9;
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d = %02d  ", j, i, i * j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
