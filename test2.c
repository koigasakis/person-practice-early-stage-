#include <stdio.h>
int Max(int x,int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("�������������֣�");
	scanf_s("%d%d",&b,&a);
	int max = Max(a, b);
	printf("�ϴ����ǣ�%d\n", max);
	return 0;
}