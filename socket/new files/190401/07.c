#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
//int research_arr(int arr[], int sz, int n)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left - right) / 2 + right;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] == n)
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = 7;
//	int sz = 10;
//	int tmp = research_arr(arr, 10, n);
//	if (tmp == 1)
//	printf("找到了，下标为%d\n", tmp);
//	else
//	{
//		printf("没找到\n", n);
//	}
//	system("pause");
//	return 0;
//}
//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	char arr[10] = "abc1234";
//	char arr1[10];
//	int count = 0;
//	while (count < 3)
//	{
//		scanf("%s", arr1);
//		if (strcmp(arr, arr1) != 0)
//		{
//			printf("请重新输入\n");
//			count++;
//		}
//		else
//		{
//			printf("登录正确！\n");
//		}
//	}
//	if (count >= 3)
//	{
//		printf("密码错误！\n");
//	}
//	system("pause");
//	return 0;
//}
//编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//void function(char arr[], int len )
//{
//	int i;
//	for (i = 0; i < len; i++)
//	{
//		if ('a' <= arr[i]&& arr[i] <= 'z')
//		{
//			arr[i] = arr[i] - 32;
//		}
//
//		else if ('A' <= arr[i]&& arr[i] <= 'Z')
//		{
//			arr[i] = arr[i] + 32;
//		}
//	}
//}
//int main()
//{
//	char arr[10] = "abc123ABC";
//	function(arr, strlen(arr));
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
//void search(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	int tmp;
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int  main()
//{
//	int i;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	search(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		putchar(arr[i] + '0');
//	}
//	system("pause");
//	return 0;
//}
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//int main()
//{
//	int i, j,n;
//	printf("请输入你的行数：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%3d*%3d=%2d ", j, i, i * j);
//		}
//		putchar('\n');
//	}
//	system("pause");
//	return 0;
//}
//使用函数实现两个数的交换。
//void jiaohuan(int *a, int* b)
//{
//	int c;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	jiaohuan(&a, &b);
//	printf("a = %d   b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
