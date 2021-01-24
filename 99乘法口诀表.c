#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()

{
	
	int a, b, z;
	for (a = 1, b = 1; a < 10; a++)
	{
		for (b = 1; b<=a; b++)
		{
			z = b*a;
			if (b == a)
				printf("%d*%d=%d\n", b, a, z);
			else
				printf("%d*%d=%d ", b, a, z);
		}
	}
	return 0;

}