#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	//printf("%c\n", '\376');
//	int i = 5;
//	printf("%d\n", -i++);
//	printf("%d\n", i);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 2147483648 * 2;
//	printf("%d\n", a);
//	//printf("%d\n", sizeof(int));
//
//	system("pause");
//	return 0;
//}
//逗号表达式
//int main()
//{
//	int a = 3;
//	printf("%d\n",((a = 3 * 5, a * 4), a + 5));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("%e\n", 123.456);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a & b);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);
//	system("pause");
//	return 0;
//}
//！      逻辑取反
//- 负值
//+ 正值
//&       取地址
//sizeof  操作数类型长度（以字节为单位）
//~对一个数的二进制按位取反
//--      前置、后置--
//++前置、后置++
//*       间接访问操作符
//(类型)   强制类型转换
//int main()
//{
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(float*));
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	printf("%d\n", a++);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	printf("%d\n", ++a);
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	float f = 3.14;
//	num = (int)f;
//	printf("num=%d\n", num);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", a > b ? a : b);
//	system("pause");
//	return 0;
//}
struct student
{
	char name[100];
	char sex;
};
int main()
{
	struct student s1 = { "小米",'n' };
	struct student * p = &s1;
	printf("%s\n", strcpy(p->name, "小明"));
	p->sex = 'v';
	printf("%c\n",p->sex);
	system("pause");
	return 0;
}
