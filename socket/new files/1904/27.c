#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//void count_one_bits(unsigned int n)
//{
//	int arr[33] = { 0 };
//	int count = 0;
//	int i;
//	for (i = 0; i < 32;i ++)
//	{
//		arr[i] = (n % 2) ;
//		n /= 2;
//	}
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int num = 15;
//	count_one_bits(15);
//	system("pause");
//	return 0;
//}
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	int i;
//	for (i = n; i;i /= 2 )
//	{
//		if (i % 2 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int num = 15;
//	int sum = count_one_bits(15);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
//unsigned int reverse_bit(int n)
//{
//	int i;
//	int count = 0;
//	int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		count = n % 2;
//		sum = sum * 2 + count;
//		n /= 2;
//	}
//	return sum;
//}
//int main()
//{
//	int num = 25;
//	int sum =  reverse_bit(25);
//	printf("%u\n", sum);
//	system("pause");
//	return 0;
//}
//不使用（a + b） / 2这种方式，求两个数的平均值。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", (a + b) >> 1);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", (a >> 1) + (b >> 1) );
//	system("pause");
//	return 0;
//}
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 4, 3, 2, 1, 5 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		arr[0] ^= arr[i];
//	}
//	printf("%d\n", arr[0]);
//	system("pause");
//	return 0;
//}
