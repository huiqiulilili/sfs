#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
//猜字谜

//game()
//产生一个随机数
//void game()
//{
//	int n = 0;
//	int i = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请输入一个数字：->\n");
//		scanf("%d",&n);
//		if (n > ret)
//		{
//			printf("大了\n");
//			i++;
//		}
//		if (n < ret)
//		{
//			printf("小了\n");
//			i++;
//
//		}
//		if (n == ret)
//		{
//			printf("你真的是太机智了\n");
//			break;
//		}
//		if (i == 10)
//		{
//			printf("你没有机会了！！！\n");
//		}
//	}
//	
//
//}
//void menu()
//{
//	    printf("********************************\n");
//		printf("******       1. play       *****\n");
//		printf("******       0. exit       *****\n"); 
//		printf("********************************\n");
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		srand((unsigned int)time(NULL));
//		menu();
//		printf("请选择：->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//玩游戏
//			game();
//			break;
//		case 0:
//			//退出游戏
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}

//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
//int main()
//{
//	int a[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int cz = 7;
//	int mid = 0;
//	int left = 0;
//	int sz = (sizeof(a) / sizeof(a[0]));//数组的长度
//	int right = sz - 1;
//	while(left <= right)
//	{
//		mid = (right - left) / 2 + left;
//		if (a[mid] > cz)
//		{
//			right = mid - 1;
//		}
//		if (a[mid] < cz)
//		{
//			left = mid + 1;
//		}
//		if (a[mid] == cz)
//		{
//			printf("找到啦,下表为%d\n",mid);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int c_z(int a[], int cz, int left, int right)
//{
//	int mid = 0;
//
//	while (left <= right)
//	{
//		mid = (right - left) / 2 + left;
//		if (a[mid] > cz)
//		{
//			right = mid - 1;
//		}
//		if (a[mid] < cz)
//		{
//			left = mid + 1;
//		}
//		if (a[mid] == cz)
//		{
//			return mid;
//			
//		}
//		
//	}
//	return 0;
//}
//int main()
//{
//	int a[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int cz = 7;
//	int mid = 0;
//	int left = 0;
//	int sz = (sizeof(a) / sizeof(a[0]));//数组的长度
//	int right = sz - 1;
//	int n = 0;
//	n = c_z(a, cz, left, right);
//	if (a[n] == cz)
//	{
//		printf("找到啦，下表为%d\n",n);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//	
//	system("pause");
//	return 0;
//}
//编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	char a[20] = "123456789";
//	char password[20];
//	int i = 0;
//	
//	do
//	{
//		printf("请输入你的密码：");
//		scanf("%s", password);
//		if (strcmp(password, a) == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误,重新输入\n");
//			i++;
//		}
//	} while (i < 3);
//	if (i == 3)
//	{
//		printf("你没有机会了\n");
//	}
//	
//	system("pause");
//	return 0;
//}


//welcome to bit!!!!!
//	//###################
//	//w#################!
//	//we###############!!
//	//wel#############!!!
//	//..
//	//welcome to bit!!!!!
//int main()
//{
//	char arr1[20] = "welcom to xian";
//	char arr2[20] = "##############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char sr[20];
//	system("shutdown -s -t 60 ");
//	while (1)
//	{
//		printf("如果输入 我是猪 就不会关机\n");
//		scanf("%s", sr);
//		if (strcmp(sr, "我是猪") == 0)
//		{
//			system("shutdown  -a");
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//goto语句
//int main()
//{
//	f:
//	printf("hahaaha\n");
//	goto f;
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "guaguagua";
//	char arr2[20] = "哇，此乃大神";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[20] = "helloxian";
//	memset(arr, '9', 5);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//交换两个数
//void hh(int *p1, int* p2)
//{
//	int t;
//	t = *p1;
//	*p1 = *p2;
//	*p2 = t;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int *p1 = &a;
//	int *p2 = &b;
//	printf("交换后\n");
//	printf("a = %d ", a);
//	printf("b = %d ", b);
//	hh(p1,p2);
//	printf("交换后\n");
//	printf("a = %d ", a);
//	printf("b = %d ", b);
//
//	system("pause");
//	return 0;
//}
//判断闰年的函数
void rn(int n)
{
	if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
	{
		printf("%d是闰年\n", n);
	}
	else
	{
		printf("%d不是闰年\n", n);
	}
}
int main()
{
	int n = 0;
	printf("请输入一个数字\n");
	scanf("%d", &n);
	rn(n);
	system("pause");
	return 0;
}
