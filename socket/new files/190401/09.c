#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int main()
//{
//	double a, b, c, s, area;
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//	s = 1.0 / 2 * (a + b + c);
//	area = sqrt(s * (s - a) * (s - b) * (s - c));
//	printf("%lf", area);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	double a, b, c, x1, x2, disc,disc1;
//	printf("请输入a,b,c:");
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//	disc = b * b - 4.0 * a * c;
//	if (disc > 0)
//	{
//		disc1 = sqrt(disc) / (2.0 * a);
//		x1 = ((-b) / (2.0 * a)) + disc1;
//		x2 = ((-b) / (2.0 * a)) - disc1;
//		printf("%lf  %lf", x1, x2);
//	}
//	if (disc == 0)
//	{
//		disc1 = sqrt(disc) / (2.0 * a);
//		x1 = ((-b) / (2.0 * a)) + disc1;
//		printf("%lf", x1);
//	}
//	if (disc < 0)
//	{
//		disc1 = sqrt(-disc) / (2.0 * a);
//		printf("x1 = %lf + %lfi\n", (-b) / (2.0 * a),disc1);
//		printf("x1 = %lf - %lfi\n", (-b) / (2.0 * a), disc1);
//
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a, b, c;
//	int tmp;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d < %d < %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		putchar(-1 + '0');
//	}
//	else if (n == 0)
//	{
//		putchar('0');
//	}
//	else
//	{
//		putchar(1 + '0');
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n >= 90)
//	{
//		printf("A");
//	}
//	else if (n >= 80)
//	{
//		printf("B");
//	}
//	else if (n >= 70)
//	{
//		printf("C");
//	}
//	else if (n >= 60)
//	{
//		printf("D");
//	}
//	else
//	{
//		printf("E");
//	}
//	system("pause");
//	return 0;
//}
int main()
{
	int n,i;
	int arr[5] = {0};
	int count = 0;
	scanf("%d", &n);
	for (i = n; i ; i /= 10)
	{
		arr[count] = i % 10;
		count++;
	}
	for (i = 0; i < count; i++)
	{
		printf("%d", arr[i]);
	}
	printf("%d\n", count - 1);
	system("pause");
	return 0;
}
