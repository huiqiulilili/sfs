#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void hannuota(int n, char A, char B, char C)
{
	if (1 == n)
	{
		printf("%c---->%c\n", A, C);//如果是1，直接从A-->c
	}
	else
	{
		hannuota(n - 1, A, C, B);//现将n - 1 个从A--->B,借助C完成
		printf("%c--->%c\n", A, C);//再将A最后的一个盘子从A到C
		hannuota(n - 1, B, A, C);//再将B中的n - 1个盘子借助C完成从 B-->A
	}
}
int main()
{
	int n = 0;
	char A = 'a', B = 'b', C = 'c';
	printf("盘子的个数:>");
	scanf("%d", &n);
	hannuota(n, A, B, C);
	system("pause");
	return 0;
}
