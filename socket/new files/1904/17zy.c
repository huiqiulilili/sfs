#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//int count_one_bits(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;
//	int tmp = count_one_bits(n);
//	printf("%d\n", tmp);
//	system("pause");
//	return 0;
//}
//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//void get_ou(int n)
//{
//	printf("偶数序列：");
//	int count = 0;
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//void get_ji(int n)
//{
//	printf("奇数序列：");
//	int count = 0;
//	int i = 0;
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int n = 10;
//    get_ou(n);
//	get_ji(n);
//	system("pause");
//	return 0;
//}
/*int main()
{
	int i, j = 0;
	int arr1[32] = { 0 };
	int arr2[32] = { 0 };
	int num = 10;
	for (i = 0; i < 32; i +=2 )
	{
		arr1[j] = (num >> i) & 1;
		j++;
	}
	for (i = 1,j = 0; i < 32; i += 2)
	{
		arr2[j] = (num >> i) & 1;
		j++;
	}
	printf("奇数位：");
	for (i = 15; i >= 0; i--)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	printf("偶数位：");
	for (i = 15; i >= 0; i--)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}*/
//输出一个整数的每一位。
//int main()
//{
//	int n = 123;
//	int a[10] = { 0 };
//	int count = 0;
//	int i;
//	for (i = n; i; i = i / 10)
//	{
//		a[count] = i % 10;
//		count++;
//	}
//	for (i = count - 1; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	system("pause");
//	return 0;
//}
//编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//int  get_differ_bit(int a, int  b)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & (1 << i)) != (b & (1 << i)))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int tmp = get_differ_bit(a, b);
//	printf("%d\n", tmp);
//	system("pause");
//	return 0;
//}

