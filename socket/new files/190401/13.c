#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	while (i <= 100)
//	{
//		sum += i;
//		i++;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	do
//	{
//		sum += i;
//		i++;
//	} while (i <= 100);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int tmp = 1;
//	double sum = 0.0;
//	while ((1.0 / tmp ) > (1e-6))
//	{
//		sum += 1.0 / tmp * pow(-1,i + 1);
//		i ++;
//		tmp += 2;
//	}
//	printf("%lf\n", sum * 4);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 1;
//	int count;
//	int n,tmp;
//	scanf("%d", &n);
//	if (n < 2)
//	{
//		printf("%d\n", 1);
//	}
//	else
//	{
//		while (n > 2)
//		{
//			count = a + b;
//			a = b;
//			b = count;
//			n--;
//		}
//		printf("%d\n", count);
//
//	}
//	system("pause");
//	return 0;
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n,tmp;
//	scanf("%d", &n);
//	tmp = fib(n);
//	printf("%d\n", tmp);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n,i;
//	scanf("%d", &n);
//	double k = sqrt(n);
//	for (i = 2; i <= k; i++)
//	{
//		if (n % i == 0)
//		{
//			printf("%d不是素数\n", n);
//			break;
//		}
//		
//	}
//	if (i == n)
//	printf("%d是素数\n", n);
//	system("pause");
//	return 0;
//}
