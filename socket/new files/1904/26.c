#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int judge(int n)
//{
//	int i;
//	int sum = 0;
//	int arr[10];
//	int count = 0;
//	for (i = n; i; i /= 10)
//	{
//		arr[count] = i % 10;
//		count++;
//	}
//	int co = count;
//	for (i = 0; i < co; i++)
//	{
//		sum += arr[i] * pow(10, --count);
//	}
//	if (n == sum)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int n = 1234321;
//	int c = judge(n);
//	if (c == 1)
//	{
//		printf("%d是水仙花\n", n);
//	}
//	else
//	{
//		printf("%d不是水仙花\n", n);
//	}
//	system("pause");
//	return 0;
//}
//void judge(int n)
//{
//	int i;
//	int count = 0;
//	char arr[33] = {'0'};
//	for (i = 0; i < 32; i++)
//	{
//		arr[count] = ((n % 2 ) + '0') ;
//		count++;
//		n /= 2;
//	}
//	for (i = count - 1; i >= 0; i--)
//	{
//		printf("%c ", arr[i]);	
//	}
//}
//int main()
//{
//	int n = 10;
//    judge(n);
//	system("pause");
//	return 0;
//}

//void judge(int n)
//{
//	int i;
//	int count = 0;
//	char arr[33] = { '0' };
//	for (i = 0; i < 32; i++)
//	{
//		arr[count] = ((n % 2) + '0');
//		count++;
//		n /= 2;
//	}
//	for (i =0; i < 32; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//}
//int main()
//{
//	int n = 10;
//	judge(n);
//	system("pause");
//	return 0;
//}
int count_one_bits(unsigned int n)
{
	int i = n;
	int sum = 0;
	for (i; i; i /= 2)
	{
		if (i % 2 == 1){
			sum++;
		}
	}
	return sum;
}
int main()
{
	int n = 15;
	int sum = count_one_bits(15);
	printf("%d\n", sum);
	system("pause");
	return 0;
}
