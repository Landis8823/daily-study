#include<stdio.h>
#include<string.h>

int main()
{
	printf("------------------------\n");
	printf("-------����������-------\n");
	printf("------------------------\n");
	printf("����:");
	char str1[10];
	char str2[10] = { "liuzhiqin" };
	scanf_s("%s", str1);
	getchar();
		if (strcmp(str1,str2)==0)
			printf("������ȷ\n");
		else
			printf("�������������\n");
	return 0;
}

