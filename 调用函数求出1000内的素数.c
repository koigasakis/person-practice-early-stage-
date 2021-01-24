#include <stdio.h>
int SU(int x)
{
	int z = 1;
	int m;
	for (m = 2; m < x; m++)
	{
		z = x%m;
		if (z == 0)
			break;
		else;
	}
	if (z == 0 || 1 == x)
		return 0;
	else
		return x;

}
int main()
{
	int i = 0;
	for (i = 1; i < 1001; i++)
	{   
		int h = SU(i);
		if (h != 0)
			printf("%d\n", h);
	}
	return 0;
}

