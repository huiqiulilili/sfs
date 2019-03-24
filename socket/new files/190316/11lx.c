#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>//因为用到了Sleep()函数
#include <time.h>//因为用到了time()函数
//倒计时3秒
//int main()
//{
//	printf("3");
//	Sleep(1000);//单位毫秒
//	printf("2");
//	Sleep(1000);
//	printf("1");
//	Sleep(1000);
//	printf("0");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	printf("3");
//	Sleep(1000);
//	system("cls");//system("cls");是清屏
//	printf("2");
//	Sleep(1000);
//	system("cls");
//
//	printf("1");
//	Sleep(1000);
//	system("cls");
//
//	printf("0");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 60;
//	system("color 0a");
//	while (i >= 0)
//	{
//		system("cls");
//		printf("%d", i);
//		Sleep(50);
//		i--;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a ,i , j;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("%d", i);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
////////////////int main()
////////////////{
////////////////	int a, i, j;
////////////////	scanf("%d", &a);
////////////////	for (i = 1; i <= a; i++)
////////////////	{
////////////////		for (j = 1; j <= 2 * i - 1; j++)
////////////////		{
////////////////			printf("%d", j);
////////////////		}
////////////////		printf("\n");
////////////////	}
////////////////	system("pause");
////////////////	return 0;
////////////////}

//奔跑的H
//int main()
//{
//	int i,j;
//	for (j = 0; j <= 100; j++)
//	{
//		for (i = 0; i <= j; i++)
//		{
//			printf(" ");
//		}
//		printf("H");
//		system("cls");
//		Sleep(2000);
//	}
//	
//	system("pause");
//	return 0;
//}

//奔跑的小人
//int main()
//{
//	int i, j;
//	for (i = 0; i <= 100; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		printf(" O\n");
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		printf("<H>\n");
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		printf("I I\n");
//		Sleep(5);
//		system("cls");
//	}
//	system("pause");
//	return 0;
//}

//4 ~200 内所有偶数都可以写成两个质数之和
//int main()
//{
//	int n, i, j, a, b;
//	int f1, f2;
//	for (n = 2; n <= 400; n++)
//	{
//		for (a = 2; a <= n / 2; a++)
//		{
//			//判断a是否为素数
//			f1 = 0;
//			for (i = 2; i <= a - 1; i++)
//			{
//				if (a % i == 0)
//				{
//					f1 = 1;
//					break;
//				}
//			}
//			if (f1 == 0)
//			{
//				b = n - a;
//				//判断b是否为素数
//				f2 = 0;
//				for (j = 2; j <= b - 1; j++)
//				{
//					if (b % j == 0)
//					{
//						f2 = 1;
//						break;
//					}
//				}
//				if (f2 == 0)
//				{
//					printf("%d=%d+%d\n", n,a,b);
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a, b, c, d, e;
//	for (a = 0; a <= 9; a++)
//	{
//		for (b = 0; b <= 9; b++)
//		{
//			for (c = 0; c <= 9; c++)
//			
//			{
//				for (d = 0; d <= 9; d++)
//				{
//					for (e = 0; e <= 9; e++)
//					{
//						if (a != b &&a != c &&a != d &&a != e &&
//							b != c &&b != d &&b != e &&
//							c != d  &&c != e)
//						{
//							if ((a * 1000 + b * 100 + c * 10 + d)*e == (d * 1000 + c * 100 + b * 10 + a))
//							{
//								printf("%d%d%d%d\n", a, b, c, d);
//								printf("*   %d\n", e);
//								printf("------\n");
//								printf("%d%d%d%d\n", d, c, b, a);
//							}
//						}
//					}
//
//				}
//
//			}
//
//		}
//
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a,b = 0;
//	int sum = 0;
//	srand((unsigned)time(NULL));
//	a = rand()%100;
//	while (1)
//	{
//		scanf("%d", &b);
//		if (a > b)
//		{
//			printf("小了");
//		}
//		if (a < b)
//		{
//			printf("大了");
//		}
//		if (a == b)
//		{
//			printf("你真是太机智了");
//		}
//		sum++;
//		if (sum>6)
//		{
//			printf("你没机会了！！");
//			system("shutdown -s -t 50");//
//				break;
//		}
//	}
//	
//	printf("%d", a); 
//	system("pause");
//	return 0;
//}

int main()
{
	int i, n, t,j;
	int a[10] = {0};

	scanf("%d",&n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		a[t]++;
	}
	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= a[i]; j++)
		{
			printf("%d", i);
		}
	}
	system("pause");
	return 0;
}

