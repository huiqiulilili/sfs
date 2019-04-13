#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int a = 10;
//	//int b = a << 1;//左移一位相当于乘以二
//	int b = a >> 1;//右移分为逻辑移位和算术移位
//	//逻辑移位  左边补0
//	//算术移位  左边补符号位
//	printf("%d\n", b);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;//0000 1010
//	int b = 20;//0001 0100
//	//int c = a & b;
//	//int c = a | b;
//	//int c = a ^ b;//按位异或  操作数相同时为0
//	int c = ~a;
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//实现交换两个数  用异或
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d  b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//缺点不能求负数
//int main()
//
//{
//	int num = 10;
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int count = 0;
//	int i;
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = -1;
//	int i = 0;
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	num = num | (1 << 4);//将第五位变为1
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = 20;
//	num = num & ~(1 << 5);//将第五位变为0
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
