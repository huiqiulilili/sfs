#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//复习static
//static 修饰局部变量  改变生命周期  不改变作用域
//void s()
//{
//	 static int i = 0;
//	 i++;
//     printf("%d\n", i);
//	}
//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		s();
//	}
//	system("pause");
//	return 0;
//}

//static修饰全局变量  改变作用域   只能在此文件内使用，不能再其他文件使用
//extern a;
//int main()
//{
//	printf("%d", a);
//	system("pause");
//	return 0;
//}

//static修饰函数   改变了函数的链接属性（外部属性  --》 内部属性）


//int main()
//
//{
//	printf("%d", Add(2, 3));
//	system("pause");
//	return 0;
//}

//if 语句

//int main()
//{
//	int a = 123456;
//
//	scanf("%d", &a);
//	if (a == 1)
//	{
//		return 10;
//	}
//	return 5;
//	system("pause");
//}

//switch 语句

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1 :
//		printf("星期1");
//		break;
//	case 2:
//		printf("星期2");
//		break;
//
//	case 3:
//		printf("星期3");
//		break;
//
//	case 4:
//		printf("星期4");
//		break;
//
//	case 5:
//		printf("星期5");
//		break;
//
//	case 6:
//		printf("星期6");
//		break;
//
//	case 7:
//		printf("星期7");
//		break;
//	default:
//		printf("你的输入错误！！！\n");
//		break;
//	}
//	system("pause");
//	return 0;
//}

//while 循环

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}

//break  循环遇到break 就停止了
//continue  循环遇到后  后面的语句就不在执行

//for 循环

//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d", i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d", i);
//	}
//	system("pause");
//	return 0;
//}
//do while 循环

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d", i);
//		i++;
//	} while (i < 10);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	} while (i < 10);
//	system("pause");
//	return 0;
//}
