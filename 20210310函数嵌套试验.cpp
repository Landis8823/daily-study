#include<stdio.h>
#include<string.h>
char bk[3][3];
int i, j;
int l = 2, k = 2;
char a, b;

int main()
{
	void base();
	void move();
	base();
	scanf_s("%c", a);
	move();
	return 0;
}

void base()
{
	for (i = 0; i < 3; i++)
	for (j = 0; j < 3; j++)
		bk[i][j] = '*';
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%c", bk[i][j]);
		printf("\n");
	}
}

void move()
{
	switch (a)
	{
	case'a':l--; break;
	case's':k--; break;
	case'd':l++; break;
	case'w':k++; break;
	}
	bk[l][k] = '5';
	printf("%c",bk[l][k]);
}