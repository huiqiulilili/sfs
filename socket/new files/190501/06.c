#define _CRT_SECURE_NO_WARNINGS 1
# define N 10
# define M 10
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int a[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	int n = 5;
//	int left = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	int right = sz - 1;
//	int mid;
//	while (left <= right)
//	{
//		mid = (right - left ) / 2 + left;
//		if (a[mid] > n)
//		{
//			right = mid - 1;
//		}
//		if (a[mid] < n)
//		{
//			left = mid + 1;
//		}
//		if (a[mid] == n)
//		{
//			printf("找到了，是第%d个元素\n", mid + 1);
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[6] = "*****";
//	int i,j;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			putchar(' ');
//		}
//		printf("%s\n", a);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a[6] = "hello";
//	char b[6] = "world";
//	char c[13] = " ";
//	int i, j;
//	for (i = 0; i < 13; i++)
//	{
//		if (a[i] != '\0')
//		c[i] = a[i];
//		else
//		{
//			for (j = 0,i; j < 6;j ++,i++)
//			c[i] = b[j];
//		}
//	}
//	puts(c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i, resu;
//	char s1[100], s2[100];
//	printf("\n Input string1 : ");
//	gets(s1);
//	printf("\n Input string2 : ");
//	gets(s2);
//	i = 0;
//	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
//		i++;
//	if (s1[i] == '\0' && s2[i] == '\0')
//		resu = 0;
//	else
//		resu = s1[i] - s2[i];
//	printf("\n result : %d. \n", resu);
//	system("pause");
//	return 0;
//}
int main()
{
	char s1[80], s2[80];
	int i;
	printf("input s2 : ");
	scanf("%s", s2);
	for (i = 0; i <= strlen(s2); i++)
		s1[i] = s2[i];
	printf("s1: %s\n", s1);
	system("pause");
	return 0;
}
