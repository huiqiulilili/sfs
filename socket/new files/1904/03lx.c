#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//函数   嘻嘻嘻嘻
//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}
//函数的调用
//函数判断素数
//int panduan_sushu(int n)
//{
//	int i = 2;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	int ss = 0;
//	scanf("%d", &n);
//	ss = panduan_sushu(n);
//	if (ss == 1)
//	{
//		printf("%d是素数\n",n);
//	}
//	system("pause");
//	return 0;
//}
//判断素数
//int main()
//{
//	int n;
//	int i = 2;
//	int flag = 1;//1 时 为素数
//	int ss = 0;
//	scanf("%d", &n);
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//		}
//	
//	}
//	if (flag == 1)
//	{
//		printf("%d是素数\n",n);
//
//	}
//	else
//	{
//		printf("%d不是素数\n",n);
//
//	}
//	system("pause");
//	return 0;
//}
//int get_number()
//{
//	return 1;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	count += get_number();
//	count += get_number();
//	count += get_number();
//	count += get_number();
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//有序数组的二分查找

//int main()
//{
//	int arr[10] = { 1,7,8,12,23,45,67,89,99 };
//	int mid = 0;
//	int n = 24;//要找的数字
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (left <= right)
//	{
//		mid = (right - left) / 2 + left;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == n)
//		{
//			printf("%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	system("pause");
//	return 0;
//}
//求字符串长度
//int get_length(char *arr)
//{
//	int i = 0;
//	while (*arr != '\0')
//	{
//		i++;
//		++arr;
//	}
//	return i;
//
//}
//int main()
//{
//	char arr[100] = "asdfghjklp";
//	int count = get_length(arr);
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//int get_length(char arr[])
//{
//	int i = 0;
//	if (arr[i] == '\0')
//	{
//		return 0;
//	}
//else
//{
//	i++;
//	return  1 + get_length(&arr[i]);
//}
//}
//int main()
//{
//	char arr[100] = "asdfghjklp";
//	int count = get_length(arr);
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//递归
//int fi_n(n)
//{
//	int n_1 = 1;
//	int n_2 = 1;
//	int i = 0;
//	int t = 0;
//	if (n < 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 2; i < n; i++)
//		{
//			t = n_1 + n_2;
//			n_1 = n_2;
//			n_2 = t;
//		}
//		return t;
//	}
//}
//int main()
//{
//	int n = 0;
//	int tmp;
//	scanf("%d", &n);
//	tmp = fi_n(n);
//
//	printf("%d\n", tmp);
//	system("pause");
//	return 0;
//}
//n^k
int jie_mul(int n, int k)
{
	if (k == 1)
	{
		return n;
	}
	else
	{
		return n * jie_mul(n , k -1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	int tmp = 0;
	scanf("%d %d", &n, &k);
	tmp = jie_mul(n, k);
	printf("%d", tmp);
	system("pause");
	return 0;
}
