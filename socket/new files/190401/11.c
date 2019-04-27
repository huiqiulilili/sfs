#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int i, j;
//	int tmp = 0;
//	double sum = 0.0;
//	int n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			tmp += j;
//		}
//		sum += 1.0 / tmp;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, j,k;
//	int n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (k = 1; k <= n - i; k++)
//		{
//			putchar(' ');
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, j, k;
//	int n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//			for (k = 1; k <= n - i; k++)
//			{
//				putchar(' ');
//			}
//			for (j = 1; j <= 2 * i - 1; j++)
//			{
//				putchar('*');
//			}
//			putchar('\n');
//	}
//	for (i = 1; i <= n - 1; i++)
//	{
//		for (k = 1; k <=  i; k++)
//		{
//			putchar(' ');
//		}
//		for (j = 1; j <= 2 * n - 2 * i - 1; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int i;
	int a, b, c, d;
	int count = 0;
	for (i = 1000; i < 10000; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100 % 10;
		d = i / 1000;
		if (a + b == c + d)
		{
			count++;
			printf("%d ",i);
			if (count % 8 == 0)
			{
				printf("\n");
			}
		}
	}
	system("pause");
	return 0;
}
