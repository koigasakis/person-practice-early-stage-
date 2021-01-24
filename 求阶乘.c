#include<stdio.h>
int main()
{
	long long int i = 0;
	long long int n = 0;
	printf("请输入数字：");
	scanf_s("%lld", &n);
	i = n;
	while (i>1)
	{         
		n = n*(i - 1);
		i--;
	}
	printf("它的阶乘为：%lld\n", n);
	return 0;
}