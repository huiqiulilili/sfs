#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////完成猜数字游戏
//void menu()
//{
//	printf("********************************\n");
//	printf("******       1. play       *****\n");
//	printf("******       0. exit       *****\n");
//	printf("********************************\n");
//}
//void game()
//{
//	//生成随机数
//	int ret = 0;
//	ret = rand() % 100 + 1;
//	int n = 0;
//	while (1)
//	{
//		printf("请输入一个数字0 -100：");
//		scanf("%d", &n);
//		if (n > ret)
//		{
//			printf("大了\n");
//		}
//		if (n < ret)
//		{
//			printf("小了\n");
//		}
//		if (n == ret)
//		{
//			printf("你太机智了\n");
//			break;
//		}
//	}
//	
//}
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		srand((unsigned int)time(NULL));
//		menu();
//		printf("请选择 ->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//玩游戏
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}

//写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
//int b_s(int a[], int k, int left, int right)
//{
//	while (left <= right)
//	{
//		int mid = (left - right) / 2 + right;
//		if (a[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		if (a[mid] == k)
//		{
//			printf("%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到\n");
//	}
//}
//int main()
//{
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int k= 7;
//	int sz = (sizeof(a) / sizeof(a[0]));
//	int right = sz - 1;
//	int ret = b_s(a, k, left, right);
//	system("pause");
//	return 0;
//}
//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	char a[100] = "123456";
//	char b[100];
//	int n = 1;
//	
//	//判断
//	//strcmp
//	while (1)
//	{
//		printf("请输入密码：");
//		scanf("%s", b);
//		if (strcmp(a, b) == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			if (n >= 3)
//			{
//				printf("登录失败\n");
//			}
//			n++;
//		}
//		
//	}
//	system("pause");
//	return 0;
//}
//编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
int main()
{
	char a;
	printf("请输入一个字符：");
	scanf("%c", &a);
	if (a >= 'a' && a <= 'z')
	{
		printf("%c", a - 32);
	}
	if (a >= 'A' && a <= 'Z')
	{
		printf("%c", a + 32);
	}
	
	system("pause");
	return 0;
}
