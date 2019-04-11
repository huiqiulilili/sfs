#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//void reverse_string(char * start, char *end)
//{
//	char tmp = *start;
//	*start = *end;
//	*end = tmp;
//	if (start + 1 < end - 1)
//	{
//		reverse_string(start + 1, end - 1);
//	}
//}
//int main()
//{
//	char arr[10] = "abcdefg";
//	reverse_string(arr, arr+(strlen(arr) - 1));
//	puts(arr);
//	system("pause");
//	return 0;
//}

//void reverse_string(char * str)
//{
//	int end = strlen(str) - 1;
//	char tmp = str[0];
//	if (*str)
//	{
//		str[0] = str[end];
//		str[end] = '\0';
//		reverse_string(str + 1);
//		str[end] = tmp;
//	}
//}
//int main()
//{
//	char arr[10] = "abcdefg";
//	reverse_string(arr);
//	puts(arr);
//	system("pause");
//	return 0;
//}
