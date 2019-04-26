#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int n;
//	double sum = 0;
//	scanf("%d", &n);
//	if (n <= 100000)
//	{
//		sum = n * 0.1;
//		printf("%lf\n",sum );
//	}
//	else if ( n <= 200000)
//	{
//		sum = 100000 * 0.1 + (n - 100000) * 0.075;
//		printf("%lf\n", sum);
//	}
//	else if (n <= 400000)
//	{
//		sum = 100000 * 0.1 + (200000 - 100000) * 0.075 + (n - 200000) * 0.05;
//		printf("%lf\n", sum);
//	}
//	else if (n <= 600000)
//	{
//		sum = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (n - 400000) * 0.03;
//		printf("%lf\n", sum);
//	}
//	else if (n <= 1000000)
//	{
//		sum = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (6000000 - 400000) * 0.03 + (n -600000 ) * 0.015;
//		printf("%lf\n", sum);
//	}
//	else if (n > 1000000)
//	{
//		sum = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (6000000 - 400000) * 0.03 + (1000000 - 600000) * 0.015 + (n - 1000000) * 0.001;
//		printf("%lf\n", sum);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n;
//	double sum = 0;
//	scanf("%d", &n);
//	if (n <= 100000)
//	{
//		n = 1;
//	}
//	else if (n <= 200000)
//	{
//		n = 2;
//	}
//	else if (n <= 400000)
//	{
//		n = 3;
//	}
//	else if (n <= 600000)
//	{
//		n = 4;
//	}
//	else if (n <= 1000000)
//	{
//		n = 5;
//	}
//	else if (n > 1000000)
//	{
//		n = 6;
//	}
//	switch (n)
//	{
//	case 1:
//		sum = n * 0.1;
//		printf("%lf\n", sum);
//		break;
//	case 2:
//		sum = 100000 * 0.1 + (n - 100000) * 0.075;
//		printf("%lf\n", sum);
//		break;
//	case 3:
//		sum = 100000 * 0.1 + (200000 - 100000) * 0.075 + (n - 200000) * 0.05;
//		printf("%lf\n", sum);
//		break;
//	case 4:
//		sum = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (n - 400000) * 0.03;
//		printf("%lf\n", sum);
//		break;
//	case 5:
//		sum = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (6000000 - 400000) * 0.03 + (n - 600000) * 0.015;
//		printf("%lf\n", sum);
//		break;
//	case 6:
//		sum = 100000 * 0.1 + (200000 - 100000) * 0.075 + (400000 - 200000) * 0.05 + (6000000 - 400000) * 0.03 + (1000000 - 600000) * 0.015 + (n - 1000000) * 0.001;
//		printf("%lf\n", sum);
//		break;
//	default:
//		break;
//	}
//	
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10, b = 20, c = 30, d = 40;
//	int tmp;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(a < d)
//	{
//		tmp = a;
//		a = d;
//		d = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	if (b < d)
//	{
//		tmp = b;
//		b = d;
//		d = tmp;
//	}
//	if (c < d)
//	{
//		tmp = c;
//		c = d;
//		d = tmp;
//	}
//	printf("%d > %d > %d > %d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}
int main()
{
	double x, y;
	int x1 = 2, y1 = 2;
	int h;
	int x2 = -2, y2 = 2;
	int x3 = -2, y3 = 2;
	int x4 = 2, y4 = -2;
	int d1, d2, d3, d4;
	scanf("%lf %lf", &x, &y);
	d1 = (x - x1) * (x - x1) + (y - y1) * (y - y1);
	d2 = (x - x2) * (x - x2) + (y - y2) * (y - y2);
	d3 = (x - x3) * (x - x3) + (y - y3) * (y - y3);
	d4 = (x - x4) * (x - x4) + (y - y4) * (y - y4);
	if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1 && 1)
	{
		h = 0;
	}
	else
	{
		h = 10;
	}
	printf("%d", h);
	system("pause");
	return 0;
}
