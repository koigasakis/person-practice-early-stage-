#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fei(int n)
{
	int m = 0;
	if (n == 1 || n == 2)
		return 1;
	else
		return  fei(n - 1) + fei(n - 2);
 
	

}
int main()
{
	int ret, n;

		scanf("%d", &n);
		ret = fei(n);
		printf("%d\n", ret);
		return 0;
	
}