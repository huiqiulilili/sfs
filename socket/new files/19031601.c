#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//最小公倍数 最大公因数
//最小公倍数 = a * b /最大公因数
//int main()
//{
//	int a, b, c, tmp, t,i;
//	printf("请输入两个数字：");
//	scanf("%d%d", &a, &b);
//	c = a < b ? a : b;
//	for (i = 2; i <= c; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			tmp = i;
//	}
//	printf("最大公约数为%d", tmp);
//	t = (a * b) / c;
//	printf("最小公倍数为%d", t);
//
//	system("pause");
//	return 0;
//}

//有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少
//问题分析：将问题转化为数学模型，首先考虑怎么输出3位数字，然后后加以循环,最后考虑怎么三位数字不同
//int main()
//{
//	int a, b, c, i,j,k,tmp;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4; j++)
//		{
//			for (k = 1; k <= 4; k++)
//			{
//				if (i != j &&j != k && i != k)
//				{
//					tmp = i * 100 + j * 10 + k;
//					printf("%d\n", tmp);
//				}
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//交换两个数值
//int main()
//{
//	int a, b, c;
//	printf("请输入两个数字：");
//	scanf("%d%d", &a, &b);
//	printf("交换前：a = %d,b = %d\n", a, b);
//	c = a;
//	a = b;
//	b = c;
//	printf("交换后：a = %d,b = %d\n", a, b);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a, b;
//	printf("请输入两个数字：");
//	scanf("%d%d", &a, &b);
//	printf("交换前：a = %d,b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a = %d,b = %d\n", a, b);
//
//	system("pause");
//	return 0;
//}

//1! + 2! + 3! +...+ 100!
//问题分析：先输出1+2+3+...+100,在考虑阶乘问题

//int main()
//{
//	int i, sum = 0,tmp = 1;
//	for (i = 1; i <= 4; i++)
//	{
//		tmp *= i;
//		sum += tmp;
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}

 //m = 4 n = 3
 //    4 + 44 + 444
 //m = 2 n = 5
 //   2 + 22 + 222 + 2222 + 22222 
//问题分析：找规律，先计列数加法循环，在看之间的关系
int main()
{
	int  c = 0,i,m = 0,n = 0,sum = 0;
	printf("请输入m和n\n");
	scanf("%d%d", &m,&n);
	for (i = 0; i < n; i++)
	{
		c =(c *10 + m);
		sum += c;
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}


