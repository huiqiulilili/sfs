#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int a = 0, b = 0, c = 0,d = 0;
//	char ch;
//	while ((ch = getchar() )!= '#')
//	{
//		if (ch >= 'a' && ch <= 'z')
//			a++;
//		if (ch >= 'A' && ch <= 'Z')
//			b++;
//		if (ch >= '0' && ch <= '9')
//			c++;
//		if (ch == ' ')
//			d++;
//	}
//	printf("a = %d , b = %d , c = %d ,d = %d \n", a, b, c,d);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int max,min;
//	int i, j;
//	int a = 6;
//	int b = 12;
//	max = a > b ? a : b;
//	min = a < b ? a : b;
//	for (i = min; i > 1; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("max = %d\n",i);
//			break;
//		}
//	}
//	for (j = max;; j++)
//	{
//		if (j % a == 0 && j % b == 0)
//		{
//			printf("min = %d\n",j);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 18;
//	int i;
//	for (i = 2; i < n; i++)
//	{
//		while (n != i)
//		{
//			if (n % i == 0)
//			{
//				printf("%d*", i);
//				n = n / i;
//			}
//			else
//			{
//				break;
//			}
//		}
//	}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b, c, n = 0;
//	for (a = 0; a <= 20; a++)
//	{
//		for (b = 0; b <= 33; b++)
//		{
//			for (c = 0; c <= 100; c++)
//			{
//				if (5 * a + 3 * b + 1 * c == 100)
//				{
//					printf("a = %d , b = %d , c = %d \n", a, b, c);
//					n++;
//				}
//			}
//		}
//	}
//	printf("共有：%d\n", n);
//	system("pause");
//	return 0;
//}
int main()
{
	int day = 9;
	int x1, x2 = 1;
	while (day > 0)
	{
		x1 = (x2 + 1) * 2;
		day--;
		x2 = x1;
	}
	printf("%d\n", x1);

	system("pause");
	return 0;
}
