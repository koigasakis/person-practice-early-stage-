#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

int meun()
{
	printf("##########################################\n");
	printf("##########   玩游戏输入  1    ############\n");
	printf("##########                    ############\n");
	printf("##########   结束游戏输入0    ############\n");
	printf("##########                    ############\n");
	printf("##########################################\n");
	return 0;
}

void game()
{
	system("cls");
	int z = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	printf("退回菜单请输入1000\n");
	printf("系统已经产生一个1~100的随机数，请猜猜它：");
	
	for (;;)
	{
		scanf("%d", &z);
		if (z < ret&&z <= 100 && z >= 0)
			printf("这个数一定是大于%d的\n请重新输入：", z);
		else if (z>ret&&z<=100&&z>=0)
			printf("这个数一定是小于%d的\n请重新输入：", z);
		else if (z == ret)
		{
			printf("恭喜你猜中它就是%d", z);
			Sleep(3000);
			break;
		}
		else if (z == 1000)
			break;
		else
			printf("别tm瞎按好好打字\n请输入1~100的数字：");
	}
			return 0;
}


int main()
{
	srand((unsigned int)time(NULL));
	int x = 0;
	do
	{
		system("cls");
		meun();
		printf("请选择：");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			Sleep(2000);
			break;
		default:
			printf("输入错误\n");
			Sleep(2000);
			break;
		}
	} while (x);
	return 0;
}