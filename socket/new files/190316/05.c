#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//define 定义宏
//#define Add(x,y) (x) + (y)//注意此处和（(x) + (y)）的区别
//int main()
//{
//	int sum = 10 * Add(2, 3);
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}

//指针
//int main()
//{
//	int a = 10;
//	&a;//取出a的地址
//	printf("%p\n", &a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int * p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char ch = 'a';
//	char *p = &ch;
//	*p = 'b';
//	printf("%c\n", ch);
//	system("pause");
//	return 0;
//}
//struct Stu
//{
//	char name[100];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//	struct Stu s = { "张三", 20, "男" };
//	struct Stu *p = &s;
//	//printf("%s%d%s", s.name, s.age, s.sex);
//	//printf("%s%d%s", (*p).name, (*p).age, (*p).sex);
//	printf("%s%d%s", p->name, p->age, p->sex);
//	system("pause");
//	return 0;
//}

//typedef struct Stu
//{
//	char name[100];
//	int age;
//	char sex[5];
//}S;
//
//int main()
//{
//	 S s = { "张三", 20, "男" };
//	 S *p = &s;
//	//printf("%s%d%s", s.name, s.age, s.sex);
//	//printf("%s%d%s", (*p).name, (*p).age, (*p).sex);
//	printf("%s%d%s", p->name, p->age, p->sex);
//	system("pause");
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	typedef unsigned int ty;//typedef  为类型重命名
//	ty s;
//	s = 5;
//	printf("%d", s);
//	system("pause");
//	return 0;
//}
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d", i);
//}
//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	system("pause");
//		return 0;
//
//static 修饰局部变量
//改变了局部变量的生命周期，并不会改变作用域
//
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d", i);
//}
//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	system("pause");
//	return 0;
//}
//static 修饰函数
//改变了函数的连接属性（外部链接--》内部链接）
//int main()
//{
//	printf("%d\n", Add(2, 3));
//	system("pause");
//	return 0;
//}

//static  修饰全局变量
//改变了全局变量的作用域，使得这个静态的全局变量只能在自己所在的源文件内起作用
//extern a;
//int main()
//{
//	printf("%d", a);
//	system("pause");
//	return 0;
//}
