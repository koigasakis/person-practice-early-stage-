#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void ex(int* a, int* b)
{
	int m = 0;
	m = *a;
	*a = *b;
	*b = m;
}
int main()

{
	int ce = 0;
	int shu = 0;
	int get = 0;
	int sz = 0;
	int o = 0;
	int arr[1000];
	while (get != '\n')
	{
		scanf("%d", &arr[shu]);
		shu++;
		ce++;
		get = getchar();
	}
	sz = sizeof(arr) / sizeof(arr[0]);
	while (1)
	{
		int i = 0;
		int k = 0;
		for (i = 0; i < sz - 1; i++)
		{

			if (arr[i] > arr[i + 1])
			{
				ex(&arr[i + 1], &arr[i]);
				k++;
			}

		}
		if (k == 0)
			break;
	}
	for (o = 1000-ce; o < 1000 ; o++)
	{
		printf("%d ",arr[o]);
	}

	return 0;
}