#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int main()
//{
//	char ch;
//	while ((ch = getchar() != '\n'))
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			ch += 4;
//			if (ch > 'Z' && ch <= 'Z' + 4 || ch > 'z')
//			{
//				ch -= 26;
//			}
//		}
//		printf("%c", ch);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 6;
//	int b = 12;
//	int c;
//	int i;
//	int min, max;
//	max = a > b ? a : b;
//	min = a < b ? a : b;
//	for (i = min; i > 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("最大公约数是%d\n", i);
//			break;
//		}
//	}
//	for (i = max; i > 0; i--)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			printf("最小公倍数是%d\n", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char c;
//	int y = 0, k = 0, s = 0, q = 0;
//	while ((c = getchar()) != '\n')
//	{
//		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//		{
//			y++;
//		}
//		else if (c == ' ')
//		{
//			k++;
//		}
//		else if (c >= '0' && c <= '9')
//		{
//			s++;
//		}
//		else
//		{
//			q++;
//		}
//	}
//	printf("y = %d,k = %d,s = %d,q = %d\n ", y, k, s, q);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b,i;
//	int tmp = 0;
//	int sum = 0;
//	scanf("%d,%d", &a, &b);
//	for (i = 0; i < b; i++)
//	{
//		tmp = tmp * 10 + a ;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, j;
//	int sum = 0;
//	int tmp = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		tmp *= i;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//main()
//{
//	float s = 0, t = 1;
//	int n;
//	for (n = 1; n <= 20; n++)
//	{
//		t = t*n;            /*求n!*/
//		s = s + t;            /*将各项累加*/
//	}
//	printf("1!+ 2!+ … + 20 != %e\n", s);
//	system("pause");
//	return 0;
//}
