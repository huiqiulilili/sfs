#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//float x1, x2, disc, p, q;
//great_than_zero(float a, float b)          /*定义一个函数，用来求disc>0时方程的根*/
//{
//	x1 = (-b + sqrt(disc)) / (2 * a);
//	x2 = (-b - sqrt(disc)) / (2 * a);
//}
//
//equal_to_zero(float a, float b)             /*定义一个函数，用来求disc=0时方程的根*/
//{
//	x1 = x2 = (-b) / (2 * a);
//}
//
//smaller_than_zero(float a, float b)          /*定义一个函数，用来求disc<0时方程的根*/
//{
//	p = -b / (2 * a);
//	q = sqrt(disc) / (2 * a);
//}
//int main()
//{
//	float a, b, c;
//	printf("\nInput a, b, c:");
//	scanf("%f, %f, %f", &a, &b, &c);
//	printf("\nequation:%5.2f*x*x + %5.2f*x + %5.2f = 0\n", a, b, c);
//	disc = b*b - 4 * a*c;
//	printf("root:\n");
//	if (disc>0)
//	{
//		great_than_zero(a, b);
//		printf("x1 = %5.2f\tx2 = %5.2f\n\n", x1, x2);
//	}
//	else if (disc == 0)
//	{
//		equal_to_zero(a, b);
//		printf("x1 = %5.2f\tx2 = %5.2f\n\n", x1, x2);
//	}
//	else
//	{
//		smaller_than_zero(a, b);
//		printf("x1 = %5.2f + %5.2fi\tx2 = %5.2f - %%5.2fi\n", p, q, p, q);
//	}
//	system("pause");
//	return 0;
//}
//写一函数，使输入的一个字符串按反序存放，在主函数中输入和输出字符串。
//reserve(char a[10],int n)
//{
//	int i;
//	char ch;
//	for (i = 0,n = strlen(a); i < strlen(a)/2; i++,n--)
//	{
//		ch = a[i];
//		a[i] = a[n - 1];
//		a[n - 1] = ch;
//	}
//}
//int main()
//{
//	char a[10] = "student";
//	int n = strlen(a);
//	int i;
//	reserve(a, n);
//	puts(a);
//	system("pause");
//	return 0;
//}

//写一函数，输入一个4位数字，要求输出这4个数字字符，但每两个数字之间有一个空格
//function(char arr[80])
//{
//	int n = strlen(arr);
//	int i;
//	for (i = n; i >= 0; i--)
//	{
//		arr[2 * i] = arr[i];
//		arr[2 * i -1] = ' ';
//
//	}
//}
//int main()
//{
//	char arr[80] = "1998";
//	function(arr);
//	puts(arr);
//	system("pause");
//	return 0;
//}

