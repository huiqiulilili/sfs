#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	float n = 1 / (float)2;
//	printf("%f\n", n);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	int c = a >> 1;
//	printf("%d", c);
//	printf("%d\n",b);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a & b;     //  0000 1010 
//	printf("%d\n", c);  // 0001 0100  
//	int d = a | b;
//	printf("%d\n", d);
//	int e = a ^ b;
//	printf("%d\n", e);
//	int f = ~a;
//	printf("%d\n", f);
//	system("pause");
//	return 0;
//}
//交换两个数
//int main()
//{
//	int a = 10;//0000 1010
//	int b = 20;//0001 0100
//	a = a ^ b;// 0001 1110 
//	b = a ^ b;// 0000 1010
//	a = a ^ b;// 0001 0100
//	printf("%d  %d", a, b);
//	system("pause");
//	return 0;
//}

//缺点n 不能为负数
//int main()
//{
//	int n = 10;
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			++count;
//		}
//		n = n / 2;
//
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i;
//	int n = 10;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (n & (1 << i))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 10;
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	printf("%d", count);
//	system("pause");
//	return 0;
//
//}
//int main()
//{
//	int n = 10;
//	n = n | (1 << 5);//把第五位变成1
//	printf("%d\n", n);
//	n = n & ~(1 << 5);//把第五位变成0
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	if (!i)
//	{
//		printf("haha\n");
//	}
//	system("pause");
//	return 0;
//}
//int d()
//{
//	int a = 1;
//	return ++a;
//}
//int main()
//{
//	int c = d();
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof (float));
//	system("pause");
//	return 0;
//}
void test1(int arr[])
{
	printf("%d\n", sizeof arr);//4

}
void test(char arr[])
{
	printf("%d\n", sizeof arr);//4

}
int main()
{
	char arr[10] = { 0 };
	int arr1[10] = { 0 };
	printf("%d\n", sizeof arr);//10
	printf("%d\n", sizeof arr1);//40
	test1(arr1);
	test(arr);

	system("pause");
	return 0;
}
