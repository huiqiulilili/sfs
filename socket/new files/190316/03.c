#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int a, b, c, tmp1,tmp2;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= 9; b++)
//		{
//			for (c = 1; c <= 9; c++)
//			{
//				tmp1 = a * 100 + b * 10 + c;
//				tmp2 = c * 100 + b * 10 + a;
//				if (tmp1 + tmp2 == 1333)
//					printf("a = %d b = %d c =%d\n", a, b, c);
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//计算200~400之间不能被3整除的整数的和
//int main()
//{
//	int i,sum = 0;
//	for (i = 200; i <= 400; i++)
//	{
//		if (i % 3 != 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	
//	system("pause");
//	return 0;
//}

//求100之内自然数中偶数的和
//int main()
//{
//	int i, sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}

//编写1*2*3 + 3*4*5 +5*6*7 + ... + 99*100*101
//int main()
//{
//	int i,  sum = 0;
//	for (i = 1; i <= 99; i = i+2)
//	{
//		sum = sum + i *(i + 1) * (i + 2);
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}

//编写一个程序，将一个一维数组的元素逆序存放并输出

//int main()
//{
//	int a[5],i;
//	printf("请输入5个数字：");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	printf("之前的顺序:");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", a[i]);
//
//	}
//	
//	printf("之后的顺序:");
//	for (i = 4; i >= 0; i--)
//	{
//		printf("%d", a[i]);
//	}
//	system("pause");
//	return 0;
//}

//求3行3列矩阵a[3][3] = {1,2,3,4,5,6,7,8,9}非对角线上的元素之和

//int main()
//{
//	int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 },i,j,sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i != j && i + j != 2)
//			{
//				sum += a[i][j];
//			}
//		}
//	}
//	printf("非对角线上的元素之和为%d",sum);
//	system("pause");
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	char a[4];
	for (i = 0; i <= 4; i++)
	{
		scanf("%c", &a[i]);
		printf("%c", a[i] +4);

	}
	system("pause");
	return 0;
}

