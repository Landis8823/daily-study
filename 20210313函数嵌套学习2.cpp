#include<stdio.h>

int main()
{
	int max4(int a, int b, int c, int d);
	int a, b, c, d,m;
	printf("输入四个数：\n");
	scanf_s("%d%d%d%d",&a,&b,&c,&d);
	printf("ok：\n");
	m = max4(a,b,c,d);
	printf("%d\n",m);
	return 0;	
}

int max4(int a, int b, int c, int d)
{
	int max2(int a, int b);
	return max2( max2( max2(a,b),c),d);
}

int max2(int a, int b)
{
	if (a >= b)
		return a;
	else
		return b;
}

