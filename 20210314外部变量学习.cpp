#include<stdio.h>
int A;
int main()
{
	int power(int);
	int b = 3, c, d, m;
	printf("�������ּ������\n");
	scanf_s("%d,%d",&A,&m);
	c = A * b;
	printf("%d * %d = %d\n",A,b,c);
	d = power(m);
	printf("%d ** %d = %d",A,m,d);
	return 0;
}