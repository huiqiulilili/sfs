#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//max_min_value(int a[10])
//{
//	int *max, *min, *p, *a_end;
//	a_end = a + 10;
//	max = min = a;
//	for (p = a + 1; p < a_end; p++)
//	{
//		if (*p > *max)
//		{
//			max = p;
//		}
//		if (*p < *min)
//		{
//			min = p;
//		}
//	}
//	*p = a[0];
//	a[0] = *min;
//	*min = *p;
//	*p = a[9];
//	a[9] = *max;
//	*max = *p;
//}
//
//int main()
//{
//	int i;
//	int a[10] = { 2, 3, 4, 5, 6, 8, 9, 1, 3, 0 };
//	max_min_value(a);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	system("pause");
//	return 0;
//}
//有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成前面m个数。
//void move(int a[10], int n)
//{
//	int tmp;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		tmp = a[i];
//		a[i] = a[n + i];
//		a[n + i] = tmp;
//	}
//}
//int main()
//{
//	int i;
//	int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = 5;
//	move(a,n);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//
//	}
//	system("pause");
//	return 0;
//}
