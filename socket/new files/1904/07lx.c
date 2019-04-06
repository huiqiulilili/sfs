#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//递归和非递归分别实现求第n个斐波那契数。
//1 1 2 3 5 8 13 21 

//递归
//int fibonaqie(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return (fibonaqie(n - 1) + fibonaqie(n - 2));
//	}
//}
//int main()
//{
//	int n;
//	int ret = 0;
//	printf("请输入你要的是第几个数字：");
//	scanf("%d", &n);
//	ret = fibonaqie(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//非递归
//int fibonaqie(int n)
//{
//	int r = 0;
//	int c = 0; 
//	int one_number = 1;
//	int two_number = 1;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		while (n > 2)
//		{
//			n = n - 1;
//			r = one_number + two_number;
//			one_number = two_number;
//			two_number = r;
//			
//		}
//		return two_number;
//	}
//}
//int main()
//{
//	int ret;
//	int n;
//	printf("请输入你要的是第几个数字：");
//	scanf("%d", &n);
//	ret = fibonaqie(n);
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//编写一个函数实现n^k，使用递归实现
//int factial(int n, int k)
//{
//	if (k < 0)
//	{
//		return -1;
//	}
//	else if (k == 0)
//	{
//		return 0;
//	}
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * factial(n, k - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int input = 0;
//	printf("请输入底数和指数：\n");
//	scanf("%d %d", &n, &k);
//	input = factial(n, k);
//	if (input != -1)
//	{
//		printf("%d", input);
//	}
//	else
//	{
//		printf("不能运算\n");
//	}
//
//	system("pause");
//	return 0;
//}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//int DigitSum(n)
//{
//	int arr[1000];
//	int sum = 0;
//	int count = 0;
//	int i;
//	for (i = n; i;i = i/10)
//	{
//		arr[count] = i % 10;
//		count++;
//	}
//	for (i = 0; i < count; i++)
//	{
//		sum = sum + arr[i];
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	int sum = 0;
//	printf("请输入一个非负数：");
//	scanf("%d", &n);
//	sum = DigitSum(n);
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//不是递归
//void reverse_string(char * string,int length)
//{
//	int i;
//	for (i = 0; i <= length; i++)
//	{if (*(string + length-i) != '\n')
//		{
//			printf("%c", *(string + length-i-1));
//		}
//	}
//	
//}
//递归
//void reverse_string(char *arr)
//{
//	if ('\0' != *arr)
//	{
//		reverse_string(arr + 1);
//		printf("%c", *(arr ));
//
//	}
//
//}
//int main()
//{
//	char arr[1000] = " ";
//	int n = 0;
//	int length = 0;
//	scanf("%s", arr);
//	reverse_string(arr);
//	system("pause");
//	return 0;
//}
//递归和非递归分别实现strlen
//非递归
//int recursion(char *arr)
//{
//	int i = 0;
//	while ('\0' != *arr)
//	{
//		i++;
//		arr++;
//	}
//	return i;
//}
//int main()
//{
//	int length = 0;
//	char arr[100] = " ";
//	scanf("%s", arr);
//	length = recursion(arr);
//	printf("%d", length);
//	system("pause");
//	return 0;
//}
//递归
//int recursion(char *arr)
//{
//	if ('\0' != *arr)
//	{
//		return 1 + recursion(arr + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int length = 0;
//	char arr[100] = " ";
//	scanf("%s", arr);
//	length = recursion(arr);
//	printf("%d", length);
//	system("pause");
//	return 0;
//}
//递归和非递归分别实现求n的阶乘
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	int result = 0;
//	scanf("%d", &n);
//	result = fac(n);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}
//int fac(int n)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	int result = 0;
//	scanf("%d", &n);
//	result = fac(n);
//	printf("%d\n", result);
//	system("pause");
//	return 0;
//}
//递归方式实现打印一个整数的每一位
void print_bite(int n)
{
	if (n < 10)
	{
		printf("%d\n", n);
	}
	else
	{
		print_bite(n / 10);
		printf("%d\n", n % 10);

	}
	
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print_bite(n);
	system("pause");
	return 0;
}
