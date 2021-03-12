#include<stdio.h>
int m, i, j, t = 0;
int a[20] = { 20, 23, 56, 48, 49, 97, 523, 125, 546, 48, 213, };

int main()
{
	void compre();
	compre();
	while(1)
	{

		printf("添加新数:");
		scanf_s("%d", &m);
		if (a[0] == 0)
		{
			a[0] = m;
			compre();
		}
		else
			printf("数字已满\n");
	};
	return 0;
}

void compre()
{
	for (j = 0; j < 19; j++)
	{
		for (i = 0; i < 19; i++)
		{
			if (a[i] > a[i + 1])
			{
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			};
		}
	}
	printf("从小到大排序:\n");
	for (i = 0; i < 20; i++)
	{
		if (a[i] != 0)
		printf("%d ", a[i]);
	}
}