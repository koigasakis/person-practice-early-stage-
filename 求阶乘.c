#include<stdio.h>
int main()
{
	long long int i = 0;
	long long int n = 0;
	printf("���������֣�");
	scanf_s("%lld", &n);
	i = n;
	while (i>1)
	{         
		n = n*(i - 1);
		i--;
	}
	printf("���Ľ׳�Ϊ��%lld\n", n);
	return 0;
}