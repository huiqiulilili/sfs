#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int function(int n)//递归
//{
//	if (n <= 2)//小于2
//	{
//		return n;
//	}
//	else
//	{
//		return function(n - 1) + function(n - 2);
//	}
//}
//int main()
//{
//	int n;
//	int sum = 0;
//	printf("请输入台阶的个数：>");
//	scanf("%d", &n);
//	sum = function(n);
//	printf("共有%d种跳法\n", sum);
//	system("pause");
//	return 0;
//}

int function(int n)//非递归
{
	int a = 1;
	int b = 2;
	int c = 0;
	if (n < 3)
	{
		return n;
	}
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n;
	int sum = 0;
	printf("请输入台阶的个数：>");
	scanf("%d", &n);
	sum = function(n);
	printf("共有%d种跳法\n", sum);
	system("pause");
	return 0;
}
