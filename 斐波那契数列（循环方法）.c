#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long long int a, b, c, i,n;
	//int n = 0;
		a = 1;
	    b = 1;
	printf("你想知道第几个斐波那契数值:");
	scanf("%lld", &n);
	if (n>2)
	{
		for (i = 3;; i++)
		{

			c = a + b;
			a = b;
			b = c;
			if (i == n)
				break;

		}
		printf("%lld\n", c);
		return 0;
	}
	else
		printf("1\n");
}