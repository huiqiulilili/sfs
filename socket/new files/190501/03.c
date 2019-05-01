int main()
{
	
	int a[11] = { 1, 2, 3, 4, 5, 6, 8, 8, 9, 11 };
	int n = 5;
	int i;
	for (i = 9; i >= 0 && a[i] > n; i--)
	{
		a[i + 1] = a[i];
	}
	a[i + 1] = n;
	for (i = 0; i < 11; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}
