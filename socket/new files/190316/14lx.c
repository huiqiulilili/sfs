#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//从小到大
//int main()
//{
//	int i, b, j;
//	int a[5] = { 0 };
//	printf("请输入n个数字：");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = i + 1; j <= 4; j++)
//		{
//			if (a[j] < a[i])
//			{
//				b = a[i];
//				a[i] = a[j];
//				a[j] = b;
//			}
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, b, j,n = 0;
//	int a[10000] = { 0 };
//	printf("请输入总个数：");
//	scanf("%d", &n);
//
//	printf("请输入n个数字：");
//	for (i = 0; i <= n -1; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = i + 1; j <=n-1 ; j++)
//		{
//			if (a[j] < a[i])
//			{
//				b = a[i];
//				a[i] = a[j];
//				a[j] = b;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	system("pause");
//	return 0;
//}

//二维数组初始化
//int main()
//{
//	int i, j, x = 0;
//	int a[3][4] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			a[i][j] = x;
//			x++;
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d  ", a[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("你刚才输入的字符为：%c", ch);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char ch;
//	int a = 2, b = 3;
//	scanf("%d%c%d", &a,&ch,&b);
//	if (ch == '+')
//		printf("%d", a + b);
//	if (ch == '-')
//		printf("%d", a - b);
//	if (ch == '*')
//		printf("%d", a * b);
//	if (ch == '/')
//		printf("%d", a / b);
//	
//	system("pause");
//	return 0;
//}

//getchar

//int main()
//{
//	char ch;
//	ch = getchar();
//	printf("哈哈%c", ch);
//	system("pause");
//	return 0;
//}
//getche（）  不用按回车就可以输出字符

//int main()
//{
//	char ch;
//	ch = getche();
//	printf("哈哈%c", ch);
//	system("pause");
//	return 0;
//}

//getch()  不显示原来输入的
//int main()
//{
//	char ch;
//	ch = getch();
//	printf("哈哈%c", ch);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 0; i <= 128; i++)
//	{
//		printf("%d  %c\n", i, i);
//	}
//	system("color f4");
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a[101], b[101];
//	int x, y;
//	scanf("%s", a);
//	scanf("%d", &x);
//	scanf("%s", b);
//	scanf("%d", &y);
//	if (x < y)
//	{
//		printf("%s", b);
//	}
//	if (x > y)
//	{
//		printf("%s", a);
//	}
//	else
//	{
//		printf("相同");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char ch[20];
//	scanf("%s", ch);
//	printf("%s", ch);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char ch[20];
//	 gets(ch);//避免了scanf遇到空格就停止
//	printf("%s", ch);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char ch[20];
//	gets(ch);
//	puts(ch);//  使用它有一个回撤的功效
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char a[101], t,len;
//	int i, j;
//	 gets(a);
//	 len = strlen(a);
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = i + 1; j < len; j++)
//		{
//			if (a[j] < a[i])
//			{
//				t = a[i];
//				a[i] = a[j];
//				a[j] = t;
//			}
//		}
//	}
//	puts(a);
//	system("pause");
//	return 0;
//}
