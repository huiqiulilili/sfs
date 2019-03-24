#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//函数
//int dd(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = dd(num1, num2);
//	printf("%d\n", max);
//	system("pause");
//	return 0;
//}

//交换两个数
//void jh(int * p1, int * p2)
//{
//	
//	int c;
//	c = *p1;
//	*p1 = *p2;
//	*p2 = c;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	jh(&num1, &num2);
//	printf("%d%d", num1, num2);
//	system("pause");
//	return 0;
//}

//写一个函数判断一个数是否为素数
//void ss(int x)
//{
//	int i;
//	int  flag = 0;
//	for (i = 2; i < x; i++)
//	{
//		if (x % i == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("%d是素数",x);
//	}
//	else
//	{
//		printf("%d不是素数", x);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	ss(n);
//	system("pause");
//	return 0;
//}

//判断一年是否为闰年
//void rn(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//	{
//		printf("%d是闰年", x);
//	}
//	else
//	{
//		printf("%d不是闰年", x);
//
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	rn(n);
//	system("pause");
//	return 0;
//}
//函数套用
//void two()
//{
//	printf("hahahaha\n");
//}
//
//void three()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		two();
//	}
//}
//int main()
//{
//	three();
//	system("pause");
//	return 0;
//}
//链式访问
//int main()
//{
//	char arr[20] = "hello";
//	int ret = strlen(strcat(arr, "bit"));
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char ch[20];
//	gets(ch);
//	puts(ch);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char c1[20] = "hello";
//	char c2[20] = "world";
//	printf("%s", strcat(c1, c2));
//	system("pause");
//	return 0;
//}

int main()
{
	char c1[20] = "hello";
	char c2[20] = "world";
	printf("%s", strcpy(c1, c2));
	system("pause");
	return 0;
}
