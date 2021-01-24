#include <stdio.h>
float chu(int x, int y)
{
	float z = (float)x / y;
	return z;
}

int main()
{
	int a = 10;
	int b = 20;
	
	printf("%p%p\n,",&a,&b);
	return 0;
}