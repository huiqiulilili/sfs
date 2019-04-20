#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//struct student
//{
//	char name[100];
//	char sex;
//};
//int main()
//{
//	struct student s1 = { "张三", 'n' };
//	printf("%s\n" "%c\n", s1.name, s1.sex);
//	system("pause");
//	return 0;
//}
//typedef struct student
//{
//	char name[100];
//	char sex;
//}ss;
//int main()
//{
//	ss s1;
//	strcpy(s1.name, "张三");
//	s1.sex = 'n';
//	printf("%s\n" "%c\n", s1.name, s1.sex);
//	system("pause");
//	return 0;
//}

//struct student
//{
//	char name[100];
//	char sex;
//};
//void print(struct student * p)
//{
//	printf("%s\n""%c\n", p->name, p->sex);
//	printf("%s\n""%c\n", (*p).name, (*p).sex);
//
//}
//int main()
//{
//	struct student s;
//	strcpy(s.name, "张三");
//	s.sex = 'n';
//	print(&s);
//	system("pause");
//	return 0;
//}
struct student
{
	char name[100];
	char sex;
};
void print(struct student  p)
{
	printf("%s\n""%c\n", p.name, p.sex);
}
int main()
{
	struct student s;
	strcpy(s.name, "张三");
	s.sex = 'n';
	print(s);
	system("pause");
	return 0;
}
