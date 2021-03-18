#include<stdio.h>

int main()
{
	int a[10];
	int i;
	printf("plaese enter 10 integer nmubers:");
	for (i = 0; i < 10; i++)
		scanf_s("%d",&a[i]);
	for (i = 0; i < 10; i++)
		printf("%d",*(a + i));
	printf("\n");
	return 0;
}