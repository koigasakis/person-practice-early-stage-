#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()

{
	int arr[] = { 2, 4, 6, 32, 65, 8, 34, 53, 84, 37, 45, 23, 65, 7, 3, 5, 86, 74, 35,233 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 1; i < sz; i++)
	{
		if (arr[0] < arr[i])
			arr[0] = arr[i];

	}
	printf("%d", arr[0]);
	return 0;

}