#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//int main()
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((d == 3) + (c == 5) == 1) &&
//							((a == 1) + (e == 4) == 1)&&
//							a != b && a != c && a != d && a != e &&
//							b != c && b != d && b != e &&
//							c != d && c != e &&
//							d != e)
//						{
//							printf("a是第%d，\n"
//								"b是第%d，\n"
//								"c是第%d，\n"
//								"d是第%d，\n"
//								"e是第%d\n",
//								a, b, c, d, e);
//						}
//					}
//
//				}
//
//			}
//
//		}
//
//	}
//	system("pause");
//	return 0;
//}

//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
//int main()
//{
//	char xianyi[4] = { 'A',' B', 'C', 'D' };
//	int i;
//	char murder;
//	for (i = 1; i <= 4; i++)
//	{
//		 murder = xianyi[i];
//		 if (((xianyi[0] != murder)+
//			 (xianyi[2] == murder )+
//			 (xianyi[3] == murder) +
//			 (xianyi[3] != murder)) == 3)
//		 {
//			 printf("killer is %c\n",murder);
//		 }
//
//	}
//
//	system("pause");
//	return 0;
//}

//杨辉三角
int main()
{
	int row = 9;
	int arr[10][10];
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		arr[i][0] = 1;
		for (j = 1; j <= i+1; j++)
		{
			if (i == j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	
	}
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
