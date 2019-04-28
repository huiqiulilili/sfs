#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//int main()
//{
//	double s1 = 0, s2 = 0, s3 = 0,s;
//	int i;
//	for (i = 1; i <= 100; i++)
//	{
//		s1 += i;
//	}
//	for (i = 1; i <= 50; i++)
//	{
//		s2 += pow(i,2);
//	}
//	for (i = 1; i <= 10; i++)
//	{
//		s2 += 1.0 / i;
//	}
//	s = s1 + s2 + s3;
//	printf("%lf\n", s);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int n,i;
//	int sum = 0;
//	int count = 0;
//	int arr[10] = {0};
//	scanf("%d", &n);
//		for (i = n; i; i /= 10)
//		{
//			arr[count] = i % 10;
//			count++;
//		}
//		for (i = 0; i < count; i++)
//		{
//			sum += (pow(arr[i], 3));
//		}
//		if (sum == n)
//		{
//			printf("%d是水仙花数 ", n);
//		}
//		else
//		{
//			printf("%d不是水仙花数\n", n);
//		}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	double a = 1.0, b = 2.0,c;
//	double sum = 0.0;
//	int i = 1;
//	while (i <= 20)
//	{
//		sum += b / a;
//		c = a;
//		a = b;
//		b = c + b;
//		i++;
//	}
//	printf("%lf\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	double n = 1.0;
//	double sum = 0;
//	double height = 100;
//	while (n <= 10)
//	{
//		height /= 2.0;
//		sum +=2 * height;
//		n++;
//	}
//	printf("%lf %lf\n", height,sum +100);
//	system("pause");
//	return 0;
//}
void main()
{
	float sn = 100, hn = sn / 2;
	int n;
	for (n = 2; n <= 10; n++)
	{
		sn = sn + 2 * hn; /*第n次落地时共经过的米数*/
		hn = hn / 2;    /*第n次反弹高度*/
	}
	printf("第10次落地时共经过%f米。\n", sn);
	printf("第10次反弹%f米。\n", hn);
	system("pause");
}
