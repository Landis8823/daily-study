#include<stdio.h>

int main()
{
	int i, j, k,h, t= 0;
	printf("输入行数，生成杨辉三角:");
	scanf_s("%d",&h);
	printf("-------------------------\n");
	int a[100] = { 1 ,};
	for (k = 0; k < h; k++)
	{
		for (i = 0; i < h; i++)
		{
			if (a[i] != 0)
				printf("%d ", a[i]);
		}
		putchar('\n');

		for (j = (h-1); j > 0; j--)
		{
			if (j > 0)
			{
				a[j] = a[j - 1] + a[j];
			}
		}

	}
	return 0;
}

