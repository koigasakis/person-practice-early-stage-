#include <stdio.h>
int chu(int x,int y)
{
	int z = x / y;
	return z;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数字：");
	scanf_s("%d%d",&b,&a);
	int shang = chu(a, b);
	printf("shangshi=%d\n,"shang);
	return 0;
}