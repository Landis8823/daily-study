#include<stdio.h>
void sw();

int main()
{
    sw();
	char c1, c2, c3, c4, c5;
	c1 = getchar();
	c2 = getchar();
	c3 = getchar();
	c4 = getchar();
	c5 = getchar();
	c1 = c1 + 4;
	c2 = c2 + 4;
	c3 = c3 + 4;
	c4 = c4 + 4;
	c5 = c5 + 4;
	printf("%c,%c,%c,%c,%c,", c1, c2, c3, c4, c5);
	return 0;

}
void sw()
{
	char a;
	a = getchar();
	switch (a)
	{
	case'a':printf("这是a"); break;
	case'b':printf("this is b"); break;
	default:printf("这不是a或者b，这是%c", a);
	}
}