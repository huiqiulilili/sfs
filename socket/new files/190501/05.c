#define _CRT_SECURE_NO_WARNINGS 1
# define N 10
# define M 10
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//		int a[16][16], i, j, k, p, n;
//		p = 1;
//		while (p == 1)
//		{
//			printf("Enter n(n=1 to 15):");
//			scanf("%d", &n);
//			if (n != 0 && n <= 15 && n % 2 != 0)     /*要求阶数为1至15之间的奇数*/
//				p = 0;
//		}
//		for (i = 1; i <= n; i++)
//		for (j = 1; j <= n; j++)
//			a[i][j] = 0;
//		j = n / 2 + 1;
//		a[1][j] = 1;
//		//规则
//		for (k = 2; k <= n*n; k++)
//		{
//			i--;
//			j++;
//			if (i<1 && j>n)
//			{
//				i += 2;
//				j--;
//			}
//			else
//			{
//				if (i<1) i = n;
//				if (j>n) j = 1;
//			}
//			if (a[i][j] == 0)
//				a[i][j] = k;
//			else
//			{
//				i += 2;
//				j--;
//				a[i][j] = k;
//			}
//		}
//		//输出
//		for (i = 1; i <= n; i++)
//		{
//			for (j = 1; j <= n; j++)
//				printf("%7d", a[i][j]);
//			printf("\n");
//		}
//	system("pause");
//	return 0;
//}
int main()
{
	int i, j, k, m, n, flag1, flag2, a[N][M], max, maxi, maxj;
	printf("\n 输入行数 n：");
	scanf("%d", &n);
	printf("\n输入列数m：");
	scanf("%d", &m);
	for (i = 0; i<n; i++)
	{
		printf("第%d行 ? \n", i);
		for (j = 0; j<m; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
			printf(" % 5d", a[i][j]);
		printf("\n");
	}
	flag2 = 0;
	//找出每行最大的数并记录列数
	for (i = 0; i<n; i++)
	{
		max = a[i][0];
		for (j = 0; j<m; j++)
		if (a[i][j]>max)
		{
			max = a[i][j];
			maxj = j;
		}

		for (k = 0, flag1 = 1; k<n && flag1; k++)
		if (max>a[k][maxj])
			flag1= 0;
		if (flag1)
		{
			printf("\n第%d行，第%d列的%d是鞍点\n", i, maxj, max);
			flag2 = 1;
		}
	}
	if (!flag2)
		printf("\n矩阵中无鞍点！\n");
	system("pause");
	return 0;
}
