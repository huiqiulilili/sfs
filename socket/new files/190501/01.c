#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int s,i;
//	int m;
//	for (m = 2; m <= 1000; m++)
//	{
//		s = 0;
//		for (i = 1; i < m; i++)
//		{
//			if (m % i == 0)
//			{
//				s = s + i;
//			}
//			if (s == m)
//			{
//				printf("%d是一个“完数”。它的因子是",m);
//				for (i = 1; i<m; i++)	
//				if (m%i == 0) printf("%d ", i);
//				printf("\n", 0);
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n = 20;
//	int i = 1;
//	double sum = 0.0,c;
//	double tmp = 2;
//	double count = 1.0;
//	while (i <= 20)
//	{
//		sum += tmp / count;
//		c = count;
//		count = tmp;
//		tmp = c + tmp;
//		i++;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}
//10猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。
//到第10天早上再想吃时，见只剩一个桃子了。求第一天共摘多少桃子
//int main()
//{
//	int n = 9;
//	int sum = 1;
//	while (n > 0)
//	{
//		sum = (sum + 1) * 2;
//		n--;
//	}
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//两个乒乓球队进行比赛，各出3人。甲队为A、B、C3人，乙队为X、Y、Z3人。已抽签决定比赛名单。
//有人向队员打听比赛名单。A说他不和X比，C说他不和X、Z比。请编程找出3对赛手的名单。

//int main()
//{
//	char i, j, k;
//	for (i = 'X'; i <= 'Z'; i++)
//	{
//		for (j = 'X'; j <= 'Z'; j++)
//		{
//			
//				for (k = 'X'; k <= 'Z'; k++)
//				{
//					if (i != j && i != k && j != k)
//					if (i != 'X' && k != 'X' && k != 'Z')
//						printf("A--%c\tB--%c\tC--%c\n", i, j, k);
//				}
//			
//		}
//	}
//	system("pause");
//	return 0;
//}
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
int main()
{
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((((b == 2) + (a == 3) == 1) &&
							((b == 2) + (e == 4) == 1) &&
							((c == 1) + (b == 2) == 1) &&
							((d == 3) + (c == 5) == 1) &&
							((a == 1) + (e == 4) == 1)) == 1) &&
							a != b && a != c && a != d && a != e &&
							b != c && b != d && b != e &&
							c != d &&c != e &&
							d != e)
						{
							printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
							break;
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
