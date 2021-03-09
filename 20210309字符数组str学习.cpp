#include<stdio.h>
#include<string.h>

int main()
{
	printf("------------------------\n");
	printf("-------ÇëÊäÈëÃÜÂë-------\n");
	printf("------------------------\n");
	printf("ÃÜÂë:");
	char str1[10];
	char str2[10] = { "liuzhiqin" };
	scanf_s("%s", str1);
	getchar();
		if (strcmp(str1,str2)==0)
			printf("ÃÜÂëÕıÈ·\n");
		else
			printf("ÃÜÂë´íÎó£¬ÇëÖØÊÔ\n");
	return 0;
}

