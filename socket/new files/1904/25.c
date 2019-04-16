#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//void reverse(int arr[],int n)
//{
//	int i = 0;
//	int j;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			int tmp = arr[i];
//			for (j = i + 1; j < n; j++)
//			{
//				if (arr[j] % 2 == 1)
//				{
//					tmp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = tmp;
//					break;
//				}
//			}
//		}
//	}
//	
//}
//int main()
//{
//	int i;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	reverse(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//	student a am i
//	i ma a tneduts
//	i am a student
//int string(char arr[])
//{
//	int sum = 0;
//	while (*arr != '\0')
//	{
//		sum++;
//		arr++;
//	}
//	return sum;
//}
//void reverse(char arr[])
//{
//	int i = 0;
//	char tmp;
//	if (arr[0] != '\0')
//	{
//		int n = string(arr) - 1;
//		tmp = arr[0];
//		arr[0] = arr[n];
//		arr[n] = '\0';
//		reverse(arr+1);
//		arr[n] = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "asd";
//	reverse(arr);
//	puts(arr);
//	system("pause");
//	return 0;
//}
//.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//int jude(int arr[],int n)
//{
//	int tmp;
//	int i;
//	tmp = arr[0];
//	for (i = 1; i < n; i++)
//	{
//		tmp ^= arr[i];
//	}
//	return tmp;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4,4, 3, 2, 1, 5 };
//	int c = jude(arr,9);
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//不使用（a + b） / 2这种方式，求两个数的平均值。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = (a + b) >> 1;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//写一个函数返回参数二进制中 1 的个数
//int count_one_bits(unsigned int n)
//{
//	int i;
//	int sum = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n & (1 << i))
//		{
//			sum++;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int n = 15;
//	int sum = count_one_bits(n);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
