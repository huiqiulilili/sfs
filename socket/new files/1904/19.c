#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void reserve_arry(char *start, char * last)
//{
//	char tmp;
//	tmp = *start;
//	*start = *last;
//	*last = tmp;
//	if (start + 1 <= last - 1)
//	{
//		reserve_arry(start + 1, last - 1);
//	}
//}
//int main()
//{
//	char arr[10] = "abcd";
//	reserve_arry(arr, arr + (strlen(arr) - 1));
//	puts(arr);
//	system("pause");
//	return 0;
//} 
//void reserve_arry(char *start)
//{
//	int end = strlen(start) - 1;
//	char tmp;
//	tmp = start[0];
//	if (start[0] != '\0')
//	{
//		start[0] = start[end];
//		start[end] = '\0';
//		reserve_arry(start + 1);
//		start[end] = tmp;
//	}
//
//}
//int main()
//{
//	char arr[10] = "abcd";
//	reserve_arry(arr);
//	puts(arr);
//	system("pause");
//	return 0;
//}
int judge(int a, int b, int c)
{
	int i = 0;
	i |= 1 << (a % 10);
	i |= 1 << (a / 10 % 10);
	i |= 1 << (a / 100);
	i |= 1 << (b % 10);
	i |= 1 << (b / 10 % 10);
	i |= 1 << (b / 100);
	i |= 1 << (c % 10);
	i |= 1 << (c / 10 % 10);
	i |= 1 << (c / 100);
	return i == 0x3fe;
}
int main()
{
	
		int a, b, c;

		for (a = 123; a <= 329; a++)
		{
			for (b = 246; b <= 658; b++)
			{
				for (c = 369; c <= 987; c++)
				{
					if (judge(a, b, c) && b == 2 * a && c == 3 * a)
					{
						printf("%d %d %d\n", a, b, c);
					}
				}
			}
		}
	system("pause");
	return 0;
}
