#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	char a[101], b[101];
//	gets(a);
//	gets(b);
//	if (strcmp(a, b) <= 0)
//	{
//		puts(a);
//		puts(b);
//	}
//	else
//	{
//		puts(b);
//		puts(a);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[5][11];
//	char t[101];
//	int i,j;
//	for (i = 0; i <= 4; i++)
//	{
//		gets(a[i]);
//	}
//	for (i = 0; i < 4; i++）//选择排序
//	{
//		for (j = i + 1; j < 5; j++)
//		{
//			if (strcmp(a[i],a[j]) >= 0)
//			{
//				strcpy(t, a[i]);
//				strcpy(a[i], a[j]);
//				strcpy(a[j], t);
//			}
//		}
//	}
//	for (i = 0; i <= 4; i++)
//	{
//		puts(a[i]);
//	}
//	system("pause");
//	return 0;
//}

//迷宫
//int main()
//{
//	char a[50][50] = { 
//		"######",
//		"#o #  ",
//		"# ## #",
//		"#  # #",
//		"##   #",
//		"######",
//	};
//	int i, x, y, p, q;
//	char ch;
//	x = 1; y = 1; p = 1; q = 5;
//	for (i = 0; i <= 5; i++)
//	{
//		puts(a[i]);
//	}
//	while((x != p) || (y != q))
//	{
//		ch = getch();
//		if (ch == 's')
//		{
//			if (a[x + 1][y] != '#')
//			{
//				a[x][y] = ' ';
//				x++;
//				a[x][y] = 'o';
//			}
//		}
//		if (ch == 'w')
//		{
//			if (a[x-1][y] != '#')
//			{
//				a[x][y] = ' ';
//				x--;
//				a[x][y] = 'o';
//			}
//		}
//		if (ch == 'a')
//		{
//			if (a[x][y-1] != '#')
//			{
//				a[x][y] = ' ';
//				y--;
//				a[x][y] = 'o';
//			}
//		}
//		if (ch == 'd')
//		{
//			if (a[x][y+1] != '#')
//			{
//				a[x][y] = ' ';
//				y++;
//				a[x][y] = 'o';
//			}
//		}
//		system("cls");
//		for (i = 0; i <= 5; i++)
//		{
//			puts(a[i]);
//		}
//	}
//	system("cls");
//	printf("你赢了！！！");
//	system("pause");
//	return 0;
//}
