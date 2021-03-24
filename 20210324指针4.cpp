#include<stdio.h>

int main()
{
	int *p ,a[2][2] = { { 0,1 }, {2,3} };
	printf("%d %d\n", a, &a[0]);   //一级 行地址
	printf("%d %d %d %d\n",a[0],*(a + 0)+0,*a,&a[0][0]);//二级 行列地址
	printf("%d %d\n", a[0][0],*(*(a+0)+0));//三级 元素
	printf("%d \n", *a[0]);//三级 元素
}