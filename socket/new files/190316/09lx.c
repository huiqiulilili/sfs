#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//switch  语句
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weedday");
//		break;
//	case 6:
//	case 7:
//		printf("weekday");
//		break;
//	default :
//		printf("输入错误");
//		break;
//	}
//	system("pause");
//	return 0;
//}

//break  终止后期所有的循环
// continue 跳出本次循环   continue 后面的代码不会实现

//int main()
//{
//	int  ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int  ch = 0;
//	int sh = 0;
//	ch = getchar();
//	putchar(ch);
//	sh = getchar();
//	putchar(sh);
//	putchar(sh);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int ch = 0;;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	system("pause");
//	return 0;
//}

//for  循环
//int main()
//{
//	for (;;)//一直循环
//	{
//		printf("hehe");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)// 循环0 次
//	{
//		printf("hehe");
//	}
//	system("pause");
//	return 0;
//}

//输入密码  三次输入错误不能再输入

//int main()
//{
//	int i;
//	char paw[10] = "";
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", paw);
//		if (strcmp(paw, "passward") == 0)
//			break;
//	}
//	if (i == 3)
//	{
//		printf("exit\n");
//	}
//	else
//	{
//		printf("log in \n");
//	}
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	char ch;
//	ch = 'A';
//	//ch = 65;
//	//ch = 'fate';
//	//ch = 7;
//	//ch = '\n';
//	printf("%c\n", ch);
//	system("pause");
//	return 0;
//}
//#define SSS "加油！生活"
//int main()
//{
//	char s[20];
//	printf("请输入你的名字\n");
//	scanf("%s", s);//scanf  会在遇到第一个空格 制表符 或 换行符  停止读取 如 h  tom 只会读 h
//	printf("%s  %s\n", s, SSS);
//	system("pause");
//	return 0;
//}
#define SSS "加油 f"
int main()
{
	char s[4];
		printf("请输入你的名字\n");
		scanf("%s", s);
		printf("%d %d",strlen(s),sizeof(s));
	system("pause");
	return 0;
}
