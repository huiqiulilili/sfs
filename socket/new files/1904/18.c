#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
//int main()
//{
//	float sum = 0;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i;
//	}
//	printf("sum = %f\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i;
//	int flag = 0;
//	int j;
//	for (i = 3; i < 100; i++)
//	{
//		flag = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		
//
//		if (flag == 0)
//		{
//			printf("%d是素数\n", i);
//		}
//	}
//	
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 5;
//	int i;
//	int sum = 1;
//	for (i = n; i >= 1; i--)
//	{
//		sum *= i;
//	}
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,4,6,3,2,1,5,6,3,4};
//	int i,j;
//	int tmp;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = i + 1; j < 9; j++)
//		{
//			if (arr[i]>arr[j])
//			{
//				tmp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int tmp;
//	int a = 3;
//	int b = 1;
//	int c = 1;
//	if (a > b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	 if (a > c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	 if (b > c)
//	 {
//		 tmp = b;
//		 b = c;
//		 c = tmp;
//	 }
//	 printf("%d %d %d", a, b, c);
//	 system("pause");
//	 return 0;
//}
//int main()
//{
//	int a = 12;
//	int i;
//	int b = 6;
//	for (i = 6; i > 0; i--)
//	{
//		if ((a % i == 0) &&( b % i == 0))
//		{
//			printf("%d是最大公约数\n",i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 12;
//	int i;
//	int b = 6;
//	for (i = 12; i > 0; i--)
//	{
//		if ((i % a == 0) && (i % b == 0))
//		{
//			printf("%d是最小公倍数\n", i);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, d, p;
	printf("请输入a，b，c 的值：");
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0)
		printf("不是二次方程");
	else
	{
		d = b*b - 4 * a*c;

		if (d == 0)
		{
			printf("有两个相等的根\nx=%7.2lf\n", -b / (2 * a));
		}
		if (d>0)
		{
			printf("有两个不相等的根\nX1=%7.2lf\nX2=%7.2lf\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
		}
		if (d<0)
		{
			p = sqrt(-d / (2 * a));
			printf("有两个共轭复根\nX1=%7.2lfi-%7.2lf\nX2=%7.2lfi-%7.2lf\n", p, b / 2, -p, b / 2);
		}
	}       
	system("pause");
	return 0;
}
