#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

//变量的作用范围
fun(){
	int a = 10;
	printf("a = %d", a);
}
int main()
{
	{
		int a = 10;
		printf("a = %d", a);
	}
	printf("a = %d", a);

	system("pause");
}


//int a = 20;
//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);
//
//	}
//	printf("a = %d\n", a);
//	system("pause");
//
//	return 0;
//}
//int main()
//{
//	printf("hello world\n");
//system("pause");
//}

//int main()
//{
//	printf("%d\n",sizeof(char));     //1
//	printf("%d\n", sizeof(short));   //2
//	printf("%d\n", sizeof(int));    //4
//	printf("%d\n", sizeof(long));   //4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));    //8
//	printf("%d\n",sizeof(double));     //8
//	printf("%d\n", sizeof(long double));
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char sex = 'n';
//	float c = 10.56;
//	printf("a = %d\n", a);
//	printf("sex = %c\n", sex);
//	printf("c = %f\n", c);
//	system("pause");
//	return 0;
//}


//局部变量与全局变量
//int global = 2019;
//int main()
//{
//	int local = 2018;
//	global = 2011;
//	printf("global = %d\n", global);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int sum1 = 1;
//	int sum2 = 2;
//	int sum = 0;
//	printf("请输入两个数字：");
//	scanf("%d%d", &sum1, &sum2);
//	sum = sum1 + sum2;
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}

