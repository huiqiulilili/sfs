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
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 4) == 1) &&
//							((e == 4) + (a == 1) == 1) &&
//							a != b&&a != c&&a != d&&a != e&&
//							b != c&&b != d&&b != e&&
//							c != d&&c != e&&
//							d != e)
//						{
//							printf("a = %d\n"
//								"b =%d\n"
//								"c= %d\n"
//								"d =%d\n"
//								"e = %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
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
//int main()
//{
//	char suspect[4] = { 'a', 'b', 'c', 'd' };
//	int i;
//	char murder;
//	for (i = 0; i < 4; i++)
//	{
//		murder = suspect[i];
//		if ((murder != suspect[0]) +
//			(murder == suspect[2]) +
//			(murder == suspect[3]) +
//			(murder != suspect[3]) == 3)
//		{
//			printf("凶手是%c", murder);
//		}
//	}
//	system("pause");
//	return 0;
//}
void print_arr(int arr[],int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	putchar('\n');
}
int main()
{
	int arr[10] = { 0 };
	int n = 3;
	int i = 0;
	int j = 0;
	puts("1");
	for (i = 1; i < n; i++)
	{
		arr[i] = 1;
		for (j = i - 1; j > 0; j--)
		{
			arr[j] = arr[j] + arr[j - 1];
		}
		arr[0] = 1;
		print_arr(arr,i +1);
	}
	system("pause");
	return 0;
}
