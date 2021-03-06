#include<stdio.h>

int main()
{
	int a[10];
	int i, j, t;
	printf("输入十个数\n");
	for (i = 0; i < 10; i++)
		{
		scanf_s("%d", &a[i]);
		}
	for (j = 9; j > 0; j--)
	{
		for (i = 0; i < j; i++)
		{
			if (a[i] > a[i+1])
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
		
	}
	for (i = 0; i < 9; i++)
		printf("排序%d\n",a[i]);
}