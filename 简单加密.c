#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
	int arr[10] = { 3, 5, 6, 3, 8, 4, 0, 9, 1, 7 };
	int i = 0;
	long long m = 0;
	printf("请输入10位数字进行加密：");
	scanf("%lld", &m);
	for (i = 0; i < 10;i++)
	{
		int a = 0;
		int b = 0;
		int k = 0;
		a = m % 10;
		m = m / 10;
		k = a^arr[i];
		if (i == 0)
		{
			printf("您的加密密码是：");
		}
		printf("%d", k);
		
	}
	return 0;
}