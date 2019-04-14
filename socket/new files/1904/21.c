#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	char arr[10] = { '1',' 2',' 3',' 4' };
//	char *p = arr;
//	printf("%d\n", arr);
//	printf("%d\n", arr + 1);
//	printf("%d\n", *arr);
//	printf("%d\n",* (arr + 1));
//	printf("%d\n", &arr[4] - &arr[0]);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int * p = arr + 1;
//	printf("%d\n", *p);
//	printf("%d\n", *(p+1));
//	printf("%d\n", p[5]);
//	printf("%d\n", p[-1]);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, p + i);
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int * p = arr;
//	printf("%p\n", arr);
//	printf("%p\n", p);
//	printf("%p\n", &arr);
//	printf("%p\n", arr +1);
//	printf("%p\n", p + 1);
//	printf("%p\n", &arr + 1);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int(*p)[10] = &arr;
//	printf("%p\n", p);
//	printf("%p\n", arr);
//	printf("%p\n", p + 1);
//	printf("%p\n", arr +1);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int num = 10;
//	int num2 = 20;
//	/*const int* p = &num;
//	p = &num2;*/
//	int * const p = &num;
//	*p = 30;
//	printf("%d\n", *p);
//	system("pause");
//	return 0;
//}
int main()
{
	int num = 10;
	int * p = &num;
	int **p2 = &p;
	printf("%d\n", num);
	printf("%d\n", *p);
	printf("%d\n", **p2);
	system("pause");
	return 0;
}
