#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>



int main()
{
	srand((unsigned int)time(NULL));
	int ret = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int j = 0;
	int h = 0;
	int i = 0;
	int g = 0;
	int n = 0;
	ret = rand() % 100 + 1;
	for (n = 0; n < 30000; n++)
	{
		int ret = rand() % 100 + 1;
		system("cls");
		if (ret >= 0 && ret < 10)
			a++;
		else if (ret >= 10 && ret < 20)
		{
			b++;
		}
		else if (ret >= 20 && ret < 30)
		{
			c++;
		}
		else if (ret >= 30 && ret < 40)
		{
			d++;
		}
		else if (ret >= 40 && ret < 50)
		{
			e++;
		}
		else if (ret >= 50 && ret < 60)
		{
			f++;
		}
		else if (ret >= 60 && ret < 70)
		{
			j++;
		}
		else if (ret >= 70 && ret < 80)
		{
			h++;
		}
		else if (ret >= 80 && ret < 90)
		{
			i++;
		}
		else if (ret >= 90 && ret <= 100)
		{
			g++;
		}
		printf("0~100产生的随机值分布情况\n");
		printf(" 1~10 个数是：%d\n", a);
		printf("10~20 个数是：%d\n", b);
		printf("20~30 个数是：%d\n", c);
		printf("30~40 个数是：%d\n", d);
		printf("40~50 个数是：%d\n", e);
		printf("50~60 个数是：%d\n", f);
		printf("60~70 个数是：%d\n", j);
		printf("70~80 个数是：%d\n", h);
		printf("80~90 个数是：%d\n", i);
		printf("90~100个数是：%d\n", g);
	}

	return 0;
}

	
