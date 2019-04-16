#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <Math.h>
//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。

int  reverse_bit(int n)
{
	 int i;
	 unsigned int sum = 0;
	 for (i = 0; i < 32; i++)
	 {
		 sum += (1 &(n >> i)) * pow(2,31-i);
	 }
	 return sum;
}
int main()
{
	int n = 25;
	unsigned int tmp = 0;
	tmp = reverse_bit(n);
    printf("%u\n", tmp);
	system("pause");
	return 0;
}

//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//int main()
//{
//	int a = 10;
//	int b = 15;
//	float c = 0;
//	c = ((a - b) *1.0) / 2 + b;
//	printf("%f", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", b + ((a - b) >> 1));
//	system("pause");
//	return 0;
//}

//编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
//int main()
//{
//	int arr[5] = { 1, 2, 3, 2, 1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		arr[0] ^= arr[i];
//	}
//	printf("%d\n", arr[0]);
//	system("pause");
//	return 0;
//}
//有一个字符数组的内容为:"student a am i",
//	请你将数组的内容改为"i am a student".
//	要求：
//	不能使用库函数。
//	只能开辟有限个空间（空间个数和字符串的长度无关）。
//	student a am i
//	i ma a tneduts
//	i am a student
//int  string_my(char arr[])
//{
//	int sum = 0;
//	while (*arr != '\0')
//	{
//		++sum;
//		++arr;
//	}
//	return sum;
//}
//void reverve(char start[])
//{
//		int sum = string_my(start) - 1;
//		int end = sum ;
//		char tmp = start[0];
//		if (*start != '\0')
//		{
//			start[0] = start[end];
//			start[end] = '\0';
//			reverve(start + 1);
//			start[end] = tmp;
//		}
//}
//int main()
//{
//	char arr[] = "i am student";
//	printf("交换前：%s\n", arr);
//	reverve(arr);
//	puts(arr);
//	printf("交换后：%d\n", string_my(arr));
//	system("pause");
//	return 0;
//}

