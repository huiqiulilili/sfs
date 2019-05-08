#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//输入3个整数，按由小到大的顺序输出。
//swap(int *a, int *b)
//{
//	int c;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
//int main()
//{
//	int a = 30;
//	int b = 20;
//	int c = 10;
//	int *p1 = &a;
//	int *p2 = &b;
//	int *p3 = &c;
//	if (a > b)
//	{
//		swap(&a,&b);
//	}
//	if (a > c)
//	{
//		swap(&a, &c);
//	}
//	if (b > c)
//	{
//		swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//输入3个字符串，按由小到打的顺序输出。
//void swap(char a[10], char b[10])
//{
//	char c[10];
//	strcpy(c, a);
//	strcpy(a, b);
//	strcpy(b, c);
//
//}
//int main()
//{
//	char a[10] = "zoo";
//	char b[10] = "deer";
//	char c[10] = "bire";
//	if (strcmp(a, b))
//	{
//		swap(a, b);
//	}
//	if (strcmp(a, c))
//	{
//		swap(a, c);
//	}
//	if (strcmp(b, c))
//	{
//		swap(b, c);
//	}
//	puts(a);
//	puts(b);
//	puts(c);
//
//	system("pause");
//	return 0;
//}
//输入10个整数，将其中最小的数与第一个数对换，把最大的一个数与最后一个对换。
//写3个函数：（1）输入10个数；（2）进行处理；（3）输出10个数。
void scan_myself(int a[10])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
}
void print_myself(int a[10])
{
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}
max_min_value(int array[10])             /* 交换函数 */
{
	int * max, *min, *p, *array_end;
	array_end = array + 10;
	max = min = array;
	for (p = array + 1; p<array_end; p++)
	if (*p> * max) max = p;               /* 将大数地址赋给max */
	else if (*p<*min) min = p;             /* 将小数地址赋给min */
	*p = array[0]; array[0] = *min; min = *p;       /*将最小数与第一个数交换*/
	*p = array[9]; array[9] = *max; max = *p;       /*将最大数与第最后一个数交换*/
	return;
}

int main()
{
	int a[10];
	int i;
	scan_myself(a);
	max_min_value(a);
	print_myself(a);
	system("pause");
	return 0;
}
