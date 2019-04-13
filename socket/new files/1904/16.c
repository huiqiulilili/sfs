#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define and &&
#define or ||
//int main()
//{
//	int a = 10;
//	//a <<= 1;
//	//a >>= 1;
//	//a ^= 20;
//	//a &= 20;
//	//a |= 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int *p = &a;
//	printf("%d\n", sizeof (int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof p);
//	printf("%d\n", sizeof (int*));
//	system("pause");
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof (arr));
//
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof (ch));
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof (arr));
//	printf("%d\n", sizeof (ch));
//	test1(arr);
//	test2(ch);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	if (a or b)
//	{
//		printf("haha\n");
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;//a = 1 b = 3 c = 3 d = 4
//
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}
//int  Judge_max(int a, int  b)
//{
//	return (a  > b ? a  : b);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Judge_max(a, b));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	/*int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);*/
//	printf("%d\n", c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char a = 0xff;//  1111 1111 1111 1111 1111 1111 1111 1111
//	char b = a << 1;//1111 1111 1111 1111 1111 1111 1111 1110
//	printf("%d\n", b);//1000 0000 0000 0000 0000 0000 0000 0010
//	system("pause");
//	return 0;
//}
//整形提升
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0x6000000;
//	if (b == 0x600)
//	{
//		printf("b\n");
//	}
//	if (c == 0x6000000)
//	{
//		printf("c\n");
//	}
//	system("pause");
//	return 0;
//}
//只要c 参与表达式的运算，就会发生整形提升，表达式+c就发生了整形提升
int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));

	system("pause");
	return 0;
}
