#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//int judge(int n)
//{
//	int i;
//	int sun = 0;
//	for (i = 0; i < 32; i++)
//	{
//		sun += n % 2;
//		n /= 2;
//	}
//	return  sun;
//}
//int judge(int n)
//{
//	int i;
//	int sun = 0;
//	int arr[32] = { 0 };
//	for (i = 0; i < 32; i++)
//	{
//		arr[i] = n % 2;
//		n /= 2;
//	}
//	for (i = 0; i < 32; i++)
//	{
//		if (arr[i] == 0)
//		{
//			sun++;
//		}
//	}
//	return 32 - sun;
//}
//int main()
//{
//	int m = 1999;
//	int n = 2299;
//	int sum = judge(m ^  n);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//int main()
//{
//	int n = 10;
//	int i;
//	int arr[32];
//	for (i = 0; i < 32; i++)
//	{
//		arr[i] = n % 2;
//		n /= 2;
//	}
//	printf("奇数序列为：\n");
//	for (i = 31; i >= 0; i -= 2)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("偶数序列为：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", arr[i]);
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
//void reverse_part(char *str, int start, int end)
//{
//	int i, j;
//	char tmp;
//	for (i = start, j = end; i < j; i++, j--)
//	{
//		tmp = str[i];
//		str[i] = str[j];
//		str[j] = tmp;
//	}
//}
//
//int main()
//{
//	char src[] = "student a am i";
//	int i;
//	int start = 0, end;
//	for (i = 0; src[i]; i++)
//	{
//		if (src[i] == ' ')
//		{
//			end = i - 1;
//			reverse_part(src, start, end);
//			start = i + 1;
//		}
//	}
//	reverse_part(src, 0, i - 1);
//	puts(src);
//	system("pause");
//	return 0;
//}
void reverse(char src[], int start, int end)
{
	int i, j;
	char tmp;
	for (i = start, j = end; i < j; i++, j--)
	{
		        tmp = src[i];
				src[i] = src[j];
				src[j] = tmp;
	}
}
int main()
{
	char src[] = "student a am i";
	int i;
	int start = 0;
	int end;
	for (i = 0; src[i]; i++)
	{
		if (src[i] == ' ')
		{
			end = i - 1;
			reverse(src, start, end);
			start = i + 1;
		}
	}
	reverse(src, 0, i - 1);
	puts(src);
	system("pause");
	return 0;
}
