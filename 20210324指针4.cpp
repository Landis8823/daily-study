#include<stdio.h>

int main()
{
	int *p ,a[2][2] = { { 0,1 }, {2,3} };
	printf("%d %d\n", a, &a[0]);   //һ�� �е�ַ
	printf("%d %d %d %d\n",a[0],*(a + 0)+0,*a,&a[0][0]);//���� ���е�ַ
	printf("%d %d\n", a[0][0],*(*(a+0)+0));//���� Ԫ��
	printf("%d \n", *a[0]);//���� Ԫ��
}