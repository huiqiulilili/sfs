#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int main()
//{
//	int i,j;
//	int n;
//	int count = 1;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d", &n);
//	for (i = 1; ; i++)
//	{
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			count *= j;
//		}
//		if (((pow(n, i * 2 - 1)) / count) < pow(10, -5))
//		{
//			break;
//		}
//		sum += ((pow(n, i * 2 - 1)) / count)  * pow(-1, i - 1);
//		tmp++;
//		count = 1;
//	}
//	printf("%d\n",tmp);
//	system("pause");
//	return 0;
//}
//a = 3，b = 7，x = 8.5，y = 71.82，c1 = ’A’，c2 = ’a’
//int main()
//{
//		int a , b;
//		float x , y;
//		char c1 , c2;
//		scanf("a = %d b = %d", &a, &b);
//		scanf(" %f %e", &x, &y);
//		scanf(" %c %c", &c1, &c2);
//		printf("a = %d b = %d", a, b);
//		printf(" %f %e", x, y);
//		printf(" %c %c", c1, c2);
//	system("pause");
//	return 0;
//}



//输入一个华氏温度，要求输出摄氏温度，公式为C=(5/9)(F-32)
int main()
{
	double n;
	double c;
	printf("请输入一个华氏温度：\n");
	scanf("%lf", &n);
	c = (5.0 / 9.0) * (n - 32);
	printf("摄氏温度为：%5.2lf\n", c);
	system("pause");
	return 0;
}
