#include<stdio.h>

int main()
{
	int a[3][3], b[3];
	int i, j,sum = 0, n = 0;
	for (i = 0; i < 3; i++)                                                       /*          */
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d",&a[i][j]);                                             /*给数组赋值*/
			if (i == j)                                       /*取出对角线元素*/
			{
				b[n] = a[i][j];
				n++;                                          /*              */
			};
		}
		putchar('\n');
	}
	for (n = 0; n < 3; n++)         /*求和*/
		sum = sum + b[n];
	printf("%d\n", sum);
}