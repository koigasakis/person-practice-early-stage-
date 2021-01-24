#include <stdio.h>
int J(int x)
{
	int m = x % 2;
	if (0 == m)
		return x;
}
int main()
{
	int i = 1;
	while (i < 101)
	{
		int a = J(i);
		if (0!=a)
		    printf("%d\n", a);
		i++;

	}
	return 0;
}