#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数字：");
	scanf_s("%d%d",&b,&a);
	if (b>a)
	{
		printf("较大数是：%d\n",b);
	}
	else
	{
		printf("较大数是：%d\n",a);
	}

	return 0;
}